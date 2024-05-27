#include <SFML/Graphics.hpp>

#include <string>
#include <iostream>
#include "Utils/KeyBoardKeyMap.h"

sf::CircleShape createCircle(int radius, int pointCount);

int main()
{
    std::cout << "ShortestPathGame" << std::endl;

    auto window = sf::RenderWindow{ { 1920u, 1080u }, "CMake SFML Project" };
    window.setFramerateLimit(144);

    sf::CircleShape circle = createCircle(100, 1000);

    window.draw(circle);

    KeyBoardKeyMap keyMap();

    while (window.isOpen())
    {
        for (auto event = sf::Event{}; window.pollEvent(event);)
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
            else if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::Right) {
                    circle.setPosition(circle.getPosition().x + 10, circle.getPosition().y);
                }
                else if (event.key.code == sf::Keyboard::Left) {
                    circle.setPosition(circle.getPosition().x - 10, circle.getPosition().y);
                }
            }
        }
        window.clear();
        window.draw(circle); // Draw the circle
        window.display(); // Display the new frame
    }
}

sf::CircleShape createCircle(int radius, int pointCount)
{
    sf::CircleShape circle(radius, pointCount);
    circle.setFillColor(sf::Color(50, 200, 150,255));
    circle.setPosition(100.0f, 100.0f);

    return circle;
}