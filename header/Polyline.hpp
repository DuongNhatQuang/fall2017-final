#ifndef Polyline_hpp
#define Polyline_hpp

#include "basic_elements/Shape.hpp"

class Polyline : public Shape
{
private:
    vector<Point> listPoint;
public:
    Polyline(float oStroke, string cStroke,         //DO NOT have Fill-values, DEFAULT value (0)
        int widthStroke, vector<int> coordinates);  
    //coordinate should be (vector x1 y1 x2 y2 ... x2 y2)
    //call constructors of p1, p2, Shape
    void consoleOutput();
    void graphicalOutput();

    ~Polyline();
};

#endif /* Line_hpp */
