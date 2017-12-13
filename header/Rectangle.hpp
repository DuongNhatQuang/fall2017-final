#ifndef Rectangle_hpp
#define Rectangle_hpp

#include "basic_elements/Shape.hpp"

class Rectangle : public Shape
{
    Point topleft;
    int height, width;
public:
    void consoleOutput();
    void graphicalOutput();
    Rectangle(float oFill, string cFill, float oStroke, string cStroke, 
        int widthStroke, int x, int y, int width, int height);
    ~Rectangle();
};

#endif