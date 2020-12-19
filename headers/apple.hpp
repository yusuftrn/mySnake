//
// Created by yusuf on 19.12.2020.
//

#ifndef MYSNAKE_APPLE_HPP
#define MYSNAKE_APPLE_HPP

#include <SFML/Graphics.hpp>
using namespace sf;

class Apple {
private:
    RectangleShape sprite;

public:
    Apple();

    void setPosition(Vector2f newPosition);
    RectangleShape getSprite();

};


#endif //MYSNAKE_APPLE_HPP
