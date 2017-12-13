#ifndef Line_hpp
#define Line_hpp

#include "basic_elements/Shape.hpp"

class Line : public Shape
{
private:
    Point p1;
    Point p2;
public:
    Line(float oStroke, string cStroke,         //DO NOT have Fill-values, DEFAULT value (0)
        int widthStroke, int x1, int y1, int x2, int y2);
    //call constructors of p1, p2, Shape
    void consoleOutput();
    void graphicalOutput();

    ~Line();
};

#endif /* Line_hpp */
