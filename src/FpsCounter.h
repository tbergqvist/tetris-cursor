#pragma once

#include <SFML/Graphics.hpp>

namespace tim {

class FpsCounter {
public:
    static constexpr int FONT_SIZE = 20;

    FpsCounter();
    void update();
    void render(sf::RenderWindow& window);

private:
    sf::Font _font; 
    sf::Text _fpsText;
    sf::Clock _fpsClock;
    int _frameCount = 0;
    float _fps = 0.0f;
};

} 