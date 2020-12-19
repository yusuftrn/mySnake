#ifndef MYSNAKE_WALL_HPP
#define MYSNAKE_WALL_HPP

#include <SFML/Graphics.hpp>
using namespace sf;

class Wall {
private:
    RectangleShape wallShape;
public:
    Wall(Vector2f position, Vector2f size);

    RectangleShape getShape();

};


#endif //MYSNAKE_WALL_HPP