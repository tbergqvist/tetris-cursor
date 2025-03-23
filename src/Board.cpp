#include "Board.h"

namespace tim {

Board::Board() {
    _board.resize(BOARD_HEIGHT, std::vector<sf::Color>(BOARD_WIDTH, sf::Color::Black));
}

int Board::clearLines() {
    int clearedLines = 0;
    for (int y = BOARD_HEIGHT - 1; y >= 0; --y) {
        if (isLineFull(y)) {
            moveLinesDown(y);
            ++y; // Check the same line again
            ++clearedLines;
        }
    }
    return clearedLines;
}

void Board::lockPiece(const Tetromino& piece, const sf::Vector2u& position) {
    for (const auto& block : piece.getBlocks()) {
        int x = position.x + block.x;
        int y = position.y + block.y;
        if (y >= 0) {
            _board[y][x] = piece.getColor();
        }
    }
}

bool Board::isValidMove(const Tetromino& piece, const sf::Vector2u& pos) const {
    for (const auto& block : piece.getBlocks()) {
        int x = pos.x + block.x;
        int y = pos.y + block.y;
        
        if (x < 0 || x >= BOARD_WIDTH || y >= BOARD_HEIGHT) return false;
        if (y >= 0 && _board[y][x] != sf::Color::Black) return false;
    }
    return true;
}

bool Board::isLineFull(int y) const {
    for (int x = 0; x < BOARD_WIDTH; ++x) {
        if (_board[y][x] == sf::Color::Black) {
            return false;
        }
    }
    return true;
}

void Board::moveLinesDown(int fromY) {
    for (int moveY = fromY; moveY > 0; --moveY) {
        _board[moveY] = _board[moveY - 1];
    }
    _board[0] = std::vector<sf::Color>(BOARD_WIDTH, sf::Color::Black);
}

} 