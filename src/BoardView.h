#pragma once

#include <SFML/Graphics.hpp>
#include <vector>
#include <memory>
#include "Tetromino.h"
#include "Board.h"

namespace tim {

class BoardView {
public:
    static constexpr int BOARD_WIDTH = 10;
    static constexpr int BOARD_HEIGHT = 20;
    static constexpr int BLOCK_SIZE = 30;

    BoardView(sf::Vector2u windowSize);
    void render(sf::RenderWindow& window, const Board& board);
    void drawBlock(sf::RenderWindow& window, int x, int y, sf::Color color);
    void drawCurrentPiece(sf::RenderWindow& window, const std::unique_ptr<Tetromino>& currentPiece, const sf::Vector2u& piecePosition);
    void drawBoard(sf::RenderWindow& window, const Board& board);
    sf::Vector2u getBoardOffset() const { return _boardOffset; }
    bool isValidMove(const Tetromino& piece, const sf::Vector2u& pos, const std::vector<std::vector<sf::Color>>& board) const;

private:
    void calculateBoardOffset(sf::Vector2u windowSize);
    sf::RectangleShape createRectangle(const sf::Vector2f& size, const sf::Vector2f& position);
    void drawBackgroundRectangles(sf::RenderWindow& window, sf::Vector2u size);

    sf::Vector2u _boardOffset;
};

} 