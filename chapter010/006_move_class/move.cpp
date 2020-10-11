#include "move.h"
#include <iostream>

Move::Move(double a, double b)
{
    x = a;
    y = b;
}
void Move::showMove() const
{
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
}
Move Move::add(const Move &m) const
{
    Move obj_new(x + m.x, y + m.y);

    return obj_new;
}
void Move::reset(double a, double b)
{
    x = a;
    y = b;
}