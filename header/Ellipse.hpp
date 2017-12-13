#ifndef Ellipse_hpp
#define Ellipse_hpp

#include "basic_elements/Shape.hpp"

class Ellipse : public Shape 
{
private:
    Point center;
    int xradius, yradius;

public:
    Ellipse(float oFill, string cFill, float oStroke, string cStroke, 
        int widthStroke, int centerx, int centery, int xradius, int yradius);
    void consoleOutput();
    void graphicalOutput();

    ~Ellipse();
};
//  <ellipse cx="500" cy="100" rx="100" ry="50" stroke="rgb(255, 255, 0)" stroke-width="3" 
//  fill="rgb(0, 255, 0)" stroke-opacity="0.7" fill-opacity="0.5" />

#endif
