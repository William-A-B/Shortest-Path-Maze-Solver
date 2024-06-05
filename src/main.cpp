#include <SFML/Graphics.hpp>

#include <iostream>
#include "Utils/KeyBoardKeyMap.h"
#include "GUI/GUI.h"

sf::CircleShape createCircle(int radius, int pointCount);

#define DEFAULT_CIRCLE_START_POS_X 100.0f;
#define DEFAULT_CIRCLE_START_POS_Y 100.0f;


int main()
{
    std::cout << "ShortestPathGame" << std::endl;

    auto window = sf::RenderWindow{ { 1920u, 1080u }, "Shortest Path Maze Solver" };
    window.setFramerateLimit(144);

    sf::CircleShape circle = createCircle(100, 100);

    sf::Vector2f circlePosition(300, 200);
    sf::Vector2f circleScale(1, 1);

    circle.setPosition(circlePosition);
    circle.setScale(circleScale);

    float xVelocity = 0.5f;
    float yVelocity = 0.5f;

    KeyBoardKeyMap keyMap();

    while (window.isOpen())
    {
        for (auto event = sf::Event{}; window.pollEvent(event);)
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
            else if (event.type == sf::Event::KeyPressed)
            {
                if (event.key.code == sf::Keyboard::Right)
                {
                    circle.setPosition(circle.getPosition().x + 10, circle.getPosition().y);
                }
                else if (event.key.code == sf::Keyboard::Left)
                {
                    circle.setPosition(circle.getPosition().x - 10, circle.getPosition().y);
                }
                else if (event.key.code == sf::Keyboard::R)
                {
                    circlePosition.x = 100.0f;
                    circlePosition.y = 100.0f;
                }
                else if (event.key.code == sf::Keyboard::Equal)
                {
                    circleScale.x = circleScale.x + 0.05;
                    circleScale.y = circleScale.y + 0.05;
                }
                else if (event.key.code == sf::Keyboard::Hyphen)
                {
                    circleScale.x = circleScale.x - 0.05;
                    circleScale.y = circleScale.y - 0.05;
                }
            }
        }

        // Circle Physics
        circlePosition.x = circlePosition.x + xVelocity;
        circlePosition.y = circlePosition.y + yVelocity;
        circle.setPosition(circlePosition);

        circle.setScale(circleScale);


        // Render frame
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