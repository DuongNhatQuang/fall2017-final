#ifndef Shape_hpp
#define Shape_hpp

#include "Point.hpp"
#include "rgbColor.hpp"

#include <iostream>
using namespace std;

class Shape
{
    rgbColor cFill, cStroke;    //color
    float oFill, oStroke;       //opacity
    float strokeWidth;          //stroke width
    //                           /transformation???
public:
    virtual void consoleOutput() = 0;
    virtual void graphicalOutput() = 0;
    //constructor
    Shape(rgbColor cFill, rgbColor cStroke, float oFill, float oStroke);
    ~Shape();
};

#endif