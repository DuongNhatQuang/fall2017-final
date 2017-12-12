#include "Point.hpp"
#include "rgbColor.hpp"

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