#include "Tetromino.h"

namespace tim {

Tetromino::Tetromino(TetrominoType type) : _type(type) {
    // Define the blocks for each piece type
    switch (type) {
        case TetrominoType::I:
            _blocks = {{0,0}, {1,0}, {2,0}, {3,0}};
            _color = sf::Color::Cyan;
            break;
        case TetrominoType::J:
            _blocks = {{0,0}, {1,0}, {2,0}, {2,1}};
            _color = sf::Color::Blue;
            break;
        case TetrominoType::L:
            _blocks = {{0,0}, {1,0}, {2,0}, {0,1}};
            _color = sf::Color(255, 165, 0); // Orange color
            break;
        case TetrominoType::O:
            _blocks = {{0,0}, {1,0}, {0,1}, {1,1}};
            _color = sf::Color::Yellow;
            break;
        case TetrominoType::S:
            _blocks = {{1,0}, {2,0}, {0,1}, {1,1}};
            _color = sf::Color::Green;
            break;
        case TetrominoType::T:
            _blocks = {{1,0}, {0,1}, {1,1}, {2,1}};
            _color = sf::Color::Magenta;
            break;
        case TetrominoType::Z:
            _blocks = {{0,0}, {1,0}, {1,1}, {2,1}};
            _color = sf::Color::Red;
            break;
    }
}

void Tetromino::rotate() {
    // Rotate 90 degrees clockwise
    for (auto& block : _blocks) {
        int x = block.x;
        block.x = -block.y;
        block.y = x;
    }
}

void Tetromino::move(int dx, int dy) {
    for (auto& block : _blocks) {
        block.x += dx;
        block.y += dy;
    }
}

} 