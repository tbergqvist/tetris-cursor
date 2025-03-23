#include "BoardView.h"

namespace tim {

BoardView::BoardView(sf::Vector2u windowSize) {
    calculateBoardOffset(windowSize);
}

void BoardView::calculateBoardOffset(sf::Vector2u windowSize) {
    unsigned int boardWidth = Board::BOARD_WIDTH * BLOCK_SIZE;
    unsigned int boardHeight = Board::BOARD_HEIGHT * BLOCK_SIZE;
    _boardOffset = {
        (windowSize.x - boardWidth) / 2,
        (windowSize.y - boardHeight) / 2
    };
}

void BoardView::render(sf::RenderWindow& window, const Board& board) {
    auto size = window.getSize();
    drawBackgroundRectangles(window, size);
    drawBoard(window, board);
}

void BoardView::drawBackgroundRectangles(sf::RenderWindow& window, sf::Vector2u size) {
    const unsigned int boardWidth = Board::BOARD_WIDTH * BLOCK_SIZE;
    const unsigned int boardHeight = Board::BOARD_HEIGHT * BLOCK_SIZE;
    
    // Left rectangle
    window.draw(createRectangle(
        {static_cast<float>(_boardOffset.x), static_cast<float>(size.y)},
        {0, 0}
    ));
    
    // Right rectangle
    window.draw(createRectangle(
        {static_cast<float>(size.x - (_boardOffset.x + boardWidth)), static_cast<float>(size.y)},
        {static_cast<float>(_boardOffset.x + boardWidth), 0}
    ));
    
    // Top rectangle
    window.draw(createRectangle(
        {static_cast<float>(boardWidth), static_cast<float>(_boardOffset.y)},
        {static_cast<float>(_boardOffset.x), 0}
    ));
    
    // Bottom rectangle
    window.draw(createRectangle(
        {static_cast<float>(boardWidth), static_cast<float>(size.y - (_boardOffset.y + boardHeight))},
        {static_cast<float>(_boardOffset.x), static_cast<float>(_boardOffset.y + boardHeight)}
    ));
}

sf::RectangleShape BoardView::createRectangle(const sf::Vector2f& size, const sf::Vector2f& position) {
    sf::RectangleShape rect(size);
    rect.setPosition(position);
    rect.setFillColor(sf::Color::White);
    return rect;
}

void BoardView::drawBoard(sf::RenderWindow& window, const Board& board) {
    const auto& boardData = board.getBoard();
    for (int y = 0; y < Board::BOARD_HEIGHT; ++y) {
        for (int x = 0; x < Board::BOARD_WIDTH; ++x) {
            if (boardData[y][x] != sf::Color::Black) {
                drawBlock(window, x, y, boardData[y][x]);
            }
        }
    }
}

void BoardView::drawCurrentPiece(sf::RenderWindow& window, const std::unique_ptr<Tetromino>& currentPiece, const sf::Vector2u& piecePosition) {
    if (!currentPiece) return;

    for (const auto& pos : currentPiece->getBlocks()) {
        drawBlock(window, piecePosition.x + pos.x, piecePosition.y + pos.y, currentPiece->getColor());
    }
}

void BoardView::drawBlock(sf::RenderWindow& window, int x, int y, sf::Color color) {
    sf::RectangleShape block({BLOCK_SIZE - 1, BLOCK_SIZE - 1});
    block.setPosition({
        static_cast<float>(_boardOffset.x + x * BLOCK_SIZE),
        static_cast<float>(_boardOffset.y + y * BLOCK_SIZE)
    });
    block.setFillColor(color);
    window.draw(block);
}

bool BoardView::isValidMove(const Tetromino& piece, const sf::Vector2u& pos, const std::vector<std::vector<sf::Color>>& board) const {
    for (const auto& block : piece.getBlocks()) {
        int x = pos.x + block.x;
        int y = pos.y + block.y;
        
        if (x < 0 || x >= BOARD_WIDTH || y >= BOARD_HEIGHT) return false;
        if (y >= 0 && board[y][x] != sf::Color::Black) return false;
    }
    return true;
}

} 