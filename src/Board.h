#pragma once

#include <SFML/Graphics.hpp>
#include <vector>
#include "Tetromino.h"

namespace tim {

class Board {
public:
    static constexpr int BOARD_WIDTH = 10;
    static constexpr int BOARD_HEIGHT = 20;

    Board();
    int clearLines();
    void lockPiece(const Tetromino& piece, const sf::Vector2u& position);
    bool isValidMove(const Tetromino& piece, const sf::Vector2u& pos) const;
    bool isLineFull(int y) const;
    const std::vector<std::vector<sf::Color>>& getBoard() const { return _board; }

private:
    void moveLinesDown(int fromY);

    std::vector<std::vector<sf::Color>> _board;
};

} 