#pragma once

#include <SFML/Graphics.hpp>

namespace tim {

class ScoreDisplay {
public:
    static constexpr int FONT_SIZE = 20;

    ScoreDisplay();
    void render(sf::RenderWindow& window);
    void setScore(int score);

private:
    sf::Font _font;
    sf::Text _scoreText;
    int _score = 0;
};

} 