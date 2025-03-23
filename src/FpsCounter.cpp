#include "FpsCounter.h"
#include <iostream>

namespace tim {

FpsCounter::FpsCounter() : _font(), _fpsText(_font) {
    if (!_font.openFromFile("/usr/share/fonts/truetype/dejavu/DejaVuSans.ttf")) {
        std::cout << "Error loading font" << std::endl;
        return;
    }

    _fpsText.setFont(_font);
    _fpsText.setString("FPS: 0");
    _fpsText.setCharacterSize(FONT_SIZE);
    _fpsText.setFillColor(sf::Color::Black);
    _fpsText.setPosition({10.f, 10.f});
}

void FpsCounter::update() {
    _frameCount++;
    if (_fpsClock.getElapsedTime().asSeconds() >= 1.0f) {
        _fps = static_cast<float>(_frameCount);
        _frameCount = 0;
        _fpsClock.restart();
    }
}

void FpsCounter::render(sf::RenderWindow& window) {
    _fpsText.setString("FPS:" + std::to_string(static_cast<int>(_fps)));
    window.draw(_fpsText);
}

} 