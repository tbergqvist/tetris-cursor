#include "ScoreDisplay.h"
#include <iostream>

namespace tim {

ScoreDisplay::ScoreDisplay() : _font(), _scoreText(_font) {
    if (!_font.openFromFile("/usr/share/fonts/truetype/dejavu/DejaVuSans.ttf")) {
        std::cout << "Error loading font" << std::endl;
        return;
    }

    _scoreText.setFont(_font);
    _scoreText.setString("Score: 0");
    _scoreText.setCharacterSize(FONT_SIZE);
    _scoreText.setFillColor(sf::Color::Black);
    _scoreText.setPosition({650.f, 10.f});
}

void ScoreDisplay::render(sf::RenderWindow& window) {
    window.draw(_scoreText);
}

void ScoreDisplay::setScore(int score) {
    _score = score;
    _scoreText.setString("Score: " + std::to_string(_score));
}

} 