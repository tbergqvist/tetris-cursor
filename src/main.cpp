#include <SFML/Graphics.hpp>
#include <iostream>
#include "Game.h"

int main() {
    // Create a window with size 800x600 pixels and title "Tetris"
    sf::RenderWindow window(sf::VideoMode({800, 600}), "Tetris");
    std::cout << "Window created" << std::endl;
    
    tim::Game game(window.getSize());
    
    sf::Clock clock;
    const float dropTime = 1.0f; // Time between piece movements in seconds
    
    // Main game loop
    while (window.isOpen()) {
        float deltaTime = clock.restart().asSeconds();
        
        while (const auto event = window.pollEvent()) {
            // Close window if requested
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
            game.handleEvent(*event);
        }
        
        static float accumulator = 0.0f;
        accumulator += deltaTime;
        if (accumulator >= dropTime) {
            accumulator -= dropTime;
            game.update();
        }
        
        // Clear the window with black color
        window.clear(sf::Color::Black);

        game.render(window);

        // Display everything that was drawn
        window.display();
    }

    return 0;
} 