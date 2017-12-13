#ifndef Polygon_hpp
#define Polygon_hpp

#include "basic_elements/Shape.hpp"

class Polygon : public Shape
{
private:
    vector<Point> listPoint;
public:
    Polygon(float oStroke, string cStroke, float oFill, string cFill,
        int widthStroke, vector<int> coordinates);  
    //coordinate should be (vector x1 y1 x2 y2 ... x2 y2)
    void consoleOutput();
    void graphicalOutput();

    ~Polygon();
};

#endif
