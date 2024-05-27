//
// Created by William-A-B on 27/05/2024.
//

#ifndef SHORTESTPATHGAME_KEYBOARDKEYMAP_H
#define SHORTESTPATHGAME_KEYBOARDKEYMAP_H


#include <string>
#include <SFML/Window/Keyboard.hpp>

class KeyBoardKeyMap {
public:
    KeyBoardKeyMap() = default;
    std::string getKeyString(sf::Keyboard::Key key);
};


#endif //SHORTESTPATHGAME_KEYBOARDKEYMAP_H
