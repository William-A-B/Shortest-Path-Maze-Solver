//
// Created by William-A-B on 27/05/2024.
//

#include "KeyBoardKeyMap.h"
#include <unordered_map>

std::string KeyBoardKeyMap::getKeyString(sf::Keyboard::Key key) {
    static const std::unordered_map<sf::Keyboard::Key, std::string> keyMap = {
            {sf::Keyboard::A, "A"}, {sf::Keyboard::B, "B"}, {sf::Keyboard::C, "C"},
            {sf::Keyboard::D, "D"}, {sf::Keyboard::E, "E"}, {sf::Keyboard::F, "F"},
            {sf::Keyboard::G, "G"}, {sf::Keyboard::H, "H"}, {sf::Keyboard::I, "I"},
            {sf::Keyboard::J, "J"}, {sf::Keyboard::K, "K"}, {sf::Keyboard::L, "L"},
            {sf::Keyboard::M, "M"}, {sf::Keyboard::N, "N"}, {sf::Keyboard::O, "O"},
            {sf::Keyboard::P, "P"}, {sf::Keyboard::Q, "Q"}, {sf::Keyboard::R, "R"},
            {sf::Keyboard::S, "S"}, {sf::Keyboard::T, "T"}, {sf::Keyboard::U, "U"},
            {sf::Keyboard::V, "V"}, {sf::Keyboard::W, "W"}, {sf::Keyboard::X, "X"},
            {sf::Keyboard::Y, "Y"}, {sf::Keyboard::Z, "Z"}, {sf::Keyboard::Num0, "0"},
            {sf::Keyboard::Num1, "1"}, {sf::Keyboard::Num2, "2"}, {sf::Keyboard::Num3, "3"},
            {sf::Keyboard::Num4, "4"}, {sf::Keyboard::Num5, "5"}, {sf::Keyboard::Num6, "6"},
            {sf::Keyboard::Num7, "7"}, {sf::Keyboard::Num8, "8"}, {sf::Keyboard::Num9, "9"},
            {sf::Keyboard::Escape, "Escape"}, {sf::Keyboard::LControl, "Left Control"},
            {sf::Keyboard::LShift, "Left Shift"}, {sf::Keyboard::LAlt, "Left Alt"},
            {sf::Keyboard::LSystem, "Left System"}, {sf::Keyboard::RControl, "Right Control"},
            {sf::Keyboard::RShift, "Right Shift"}, {sf::Keyboard::RAlt, "Right Alt"},
            {sf::Keyboard::RSystem, "Right System"}, {sf::Keyboard::Menu, "Menu"},
            {sf::Keyboard::LBracket, "["}, {sf::Keyboard::RBracket, "]"},
            {sf::Keyboard::SemiColon, ";"}, {sf::Keyboard::Comma, ","},
            {sf::Keyboard::Period, "."}, {sf::Keyboard::Quote, "'"},
            {sf::Keyboard::Slash, "/"}, {sf::Keyboard::BackSlash, "\\"},
            {sf::Keyboard::Tilde, "~"}, {sf::Keyboard::Equal, "="},
            {sf::Keyboard::Dash, "-"}, {sf::Keyboard::Space, "Space"},
            {sf::Keyboard::Return, "Return"}, {sf::Keyboard::BackSpace, "BackSpace"},
            {sf::Keyboard::Tab, "Tab"}, {sf::Keyboard::PageUp, "Page Up"},
            {sf::Keyboard::PageDown, "Page Down"}, {sf::Keyboard::End, "End"},
            {sf::Keyboard::Home, "Home"}, {sf::Keyboard::Insert, "Insert"},
            {sf::Keyboard::Delete, "Delete"}, {sf::Keyboard::Add, "Numpad +"},
            {sf::Keyboard::Subtract, "Numpad -"}, {sf::Keyboard::Multiply, "Numpad *"},
            {sf::Keyboard::Divide, "Numpad /"}, {sf::Keyboard::Left, "Left Arrow"},
            {sf::Keyboard::Right, "Right Arrow"}, {sf::Keyboard::Up, "Up Arrow"},
            {sf::Keyboard::Down, "Down Arrow"}, {sf::Keyboard::Numpad0, "Numpad 0"},
            {sf::Keyboard::Numpad1, "Numpad 1"}, {sf::Keyboard::Numpad2, "Numpad 2"},
            {sf::Keyboard::Numpad3, "Numpad 3"}, {sf::Keyboard::Numpad4, "Numpad 4"},
            {sf::Keyboard::Numpad5, "Numpad 5"}, {sf::Keyboard::Numpad6, "Numpad 6"},
            {sf::Keyboard::Numpad7, "Numpad 7"}, {sf::Keyboard::Numpad8, "Numpad 8"},
            {sf::Keyboard::Numpad9, "Numpad 9"}, {sf::Keyboard::F1, "F1"},
            {sf::Keyboard::F2, "F2"}, {sf::Keyboard::F3, "F3"}, {sf::Keyboard::F4, "F4"},
            {sf::Keyboard::F5, "F5"}, {sf::Keyboard::F6, "F6"}, {sf::Keyboard::F7, "F7"},
            {sf::Keyboard::F8, "F8"}, {sf::Keyboard::F9, "F9"}, {sf::Keyboard::F10, "F10"},
            {sf::Keyboard::F11, "F11"}, {sf::Keyboard::F12, "F12"}, {sf::Keyboard::F13, "F13"},
            {sf::Keyboard::F14, "F14"}, {sf::Keyboard::F15, "F15"}, {sf::Keyboard::Pause, "Pause"},
    };

    auto it = keyMap.find(key);
    if (it != keyMap.end())
    {
        return it->second;
    }
    else
    {
        return "Unknown";
    }
}
