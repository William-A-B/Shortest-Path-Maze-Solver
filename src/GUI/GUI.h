//
// Created by William-A-B on 27/05/2024.
//

#ifndef SHORTESTPATHGAME_GUI_H
#define SHORTESTPATHGAME_GUI_H


#include <SFML/Graphics/RenderWindow.hpp>

class GUI {
public:
    GUI()
    {
        auto window = sf::RenderWindow{ { 1920u, 1080u }, "Shortest Path Maze Solver" };
        window.setFramerateLimit(144);
    }

    sf::RenderWindow window;



};


#endif //SHORTESTPATHGAME_GUI_H
