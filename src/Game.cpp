#include "Game.h"
#include <random>

namespace tim {

Game::Game(sf::Vector2u windowSize) : _gameArea(windowSize) {
    initializePiecePosition();
    spawnNewPiece();
}

void Game::initializePiecePosition() {
    _piecePosition = {Board::BOARD_WIDTH / 2 - 1, 0};
}

void Game::handleEvent(const sf::Event& event) {
    if (const auto* keyEvent = event.getIf<sf::Event::KeyPressed>()) {
        if (_gameOverScreen.isVisible()) {
            if (keyEvent->code == sf::Keyboard::Key::R) {
                restart();
                return;
            }
        }
        handleKeyPress(*keyEvent);
    }
}

void Game::handleKeyPress(const sf::Event::KeyPressed& keyEvent) {
    switch (keyEvent.code) {
        case sf::Keyboard::Key::Left:
        case sf::Keyboard::Key::A:
            movePiece(sf::Vector2i(-1, 0));
            break;
        case sf::Keyboard::Key::Right:
        case sf::Keyboard::Key::D:
            movePiece(sf::Vector2i(1, 0));
            break;
        case sf::Keyboard::Key::Down:
        case sf::Keyboard::Key::S:
            movePiece(sf::Vector2i(0, 1));
            break;
        case sf::Keyboard::Key::Up:
        case sf::Keyboard::Key::W:
            rotatePiece();
            break;
        case sf::Keyboard::Key::Space:
            quickDrop();
            break;
    }
}

void Game::movePiece(const sf::Vector2i& direction) {
    sf::Vector2u newPos = {
        static_cast<unsigned int>(static_cast<int>(_piecePosition.x) + direction.x),
        static_cast<unsigned int>(static_cast<int>(_piecePosition.y) + direction.y)
    };
    
    if (_board.isValidMove(*_currentPiece, newPos)) {
        _piecePosition = newPos;
    }
}

void Game::rotatePiece() {
    _currentPiece->rotate();
    if (!_board.isValidMove(*_currentPiece, _piecePosition)) {
        // Undo rotation if invalid
        for (int i = 0; i < 3; ++i) _currentPiece->rotate();
    }
}

void Game::quickDrop() {
    if (!_currentPiece) return;

    // Move piece down until it collides
    while (_board.isValidMove(*_currentPiece, {_piecePosition.x, _piecePosition.y + 1})) {
        _piecePosition.y++;
    }

    // Lock the piece immediately
    handlePieceLock();
}

void Game::update() {
    if (_gameOverScreen.isVisible()) return;

    if (!_currentPiece) {
        spawnNewPiece();
        return;
    }

    if (_board.isValidMove(*_currentPiece, {_piecePosition.x, _piecePosition.y + 1})) {
        _piecePosition.y++;
    } else {
        handlePieceLock();
    }
}

void Game::handlePieceLock() {
    _board.lockPiece(*_currentPiece, _piecePosition);
    int clearedLines = _board.clearLines();
    updateScore(clearedLines);
    spawnNewPiece();
}

void Game::updateScore(int linesCleared) {
    if (linesCleared > 0) {
        // Base score for clearing lines
        _score += linesCleared * SCORE_PER_LINE;
        
        // Bonus for clearing multiple lines at once
        if (linesCleared > 1) {
            _score += (linesCleared - 1) * SCORE_MULTIPLIER;
        }
        
        _scoreDisplay.setScore(_score);
    }
}

void Game::render(sf::RenderWindow& window) {
    _gameArea.render(window, _board);
    _gameArea.drawCurrentPiece(window, _currentPiece, _piecePosition);
    _scoreDisplay.render(window);
    
    _fpsCounter.update();
    _fpsCounter.render(window);

    _gameOverScreen.render(window);
}

void Game::spawnNewPiece() {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    static std::uniform_int_distribution<> dis(0, 6);
    
    _currentPiece = std::make_unique<Tetromino>(static_cast<TetrominoType>(dis(gen)));
    _piecePosition = {Board::BOARD_WIDTH / 2 - 1, 0};
    
    if (!_board.isValidMove(*_currentPiece, _piecePosition)) {
        // Game over
        _currentPiece.reset();
        _gameOverScreen.show();
    }
}

void Game::restart() {
    _board = Board();
    _currentPiece.reset();
    _piecePosition = {Board::BOARD_WIDTH / 2 - 1, 0};
    _gameOverScreen.hide();
    _score = 0;
    _scoreDisplay.setScore(_score);
    spawnNewPiece();
}

}