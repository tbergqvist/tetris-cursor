#pragma once

#include <SFML/Graphics.hpp>
#include <vector>
#include <memory>
#include "Tetromino.h"
#include "FpsCounter.h"
#include "ScoreDisplay.h"
#include "BoardView.h"
#include "Board.h"
#include "GameOverScreen.h"

namespace tim {

class Game {
public:
    Game(sf::Vector2u windowSize);
    void handleEvent(const sf::Event& event);
    void update();
    void render(sf::RenderWindow& window);

private:
    void initializePiecePosition();
    void handleKeyPress(const sf::Event::KeyPressed& keyEvent);
    void movePiece(const sf::Vector2i& direction);
    void rotatePiece();
    void spawnNewPiece();
    void handlePieceLock();
    void restart();
    void quickDrop();
    void updateScore(int linesCleared);

    static constexpr int SCORE_PER_LINE = 100;
    static constexpr int SCORE_MULTIPLIER = 50;

    std::unique_ptr<Tetromino> _currentPiece;
    sf::Vector2u _piecePosition;
    Board _board;
    BoardView _gameArea;
    FpsCounter _fpsCounter;
    ScoreDisplay _scoreDisplay;
    GameOverScreen _gameOverScreen;
    int _score = 0;
};

}