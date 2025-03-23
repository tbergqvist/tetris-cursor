#pragma once

#include <SFML/Graphics.hpp>

namespace tim {

class GameOverScreen {
public:
    static constexpr int FONT_SIZE = 48;

    GameOverScreen();
    void render(sf::RenderWindow& window);
    bool isVisible() const { return _visible; }
    void show() { _visible = true; }
    void hide() { _visible = false; }

private:
    sf::Font _font;
    sf::Text _gameOverText;
    sf::Text _restartText;
    bool _visible = false;
};

} 