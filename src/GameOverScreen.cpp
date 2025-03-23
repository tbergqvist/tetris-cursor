#include "GameOverScreen.h"
#include <iostream>

namespace tim {

GameOverScreen::GameOverScreen() : _font(), _gameOverText(_font), _restartText(_font) {
    if (!_font.openFromFile("/usr/share/fonts/truetype/dejavu/DejaVuSans.ttf")) {
        std::cout << "Error loading font" << std::endl;
        return;
    }

    // Setup game over text
    _gameOverText.setString("GAME OVER");
    _gameOverText.setCharacterSize(FONT_SIZE);
    _gameOverText.setFillColor(sf::Color::White);
    _gameOverText.setPosition({300.f, 100.f});
    
    // Setup restart text
    _restartText.setString("Press R to Restart");
    _restartText.setCharacterSize(FONT_SIZE / 2);
    _restartText.setFillColor(sf::Color::White);
    _restartText.setPosition({300.f, 200.f});
}

void GameOverScreen::render(sf::RenderWindow& window) {
    if (!_visible) return;

    // Draw semi-transparent black background
    sf::RectangleShape background({800.f, 600.f});
    background.setPosition({0.f, 0.f});
    background.setFillColor(sf::Color(0, 0, 0, 200));
    window.draw(background);

    // Draw text
    window.draw(_gameOverText);
    window.draw(_restartText);
}

} 