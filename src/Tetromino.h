#pragma once

#include <SFML/Graphics.hpp>
#include <array>
#include <vector>

namespace tim {

enum class TetrominoType {
    I, J, L, O, S, T, Z
};

class Tetromino {
public:
    Tetromino(TetrominoType type);
    
    void rotate();
    void move(int dx, int dy);
    const std::vector<sf::Vector2i>& getBlocks() const { return _blocks; }
    sf::Color getColor() const { return _color; }

private:
    std::vector<sf::Vector2i> _blocks;
    sf::Color _color;
    TetrominoType _type;
};

} 