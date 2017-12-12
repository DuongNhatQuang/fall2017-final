
#include "basic_elements/Point.hpp"
#include "basic_elements/rgbColor.hpp"
#include "basic_elements/Shape.hpp"

class Rectangle : public Shape
{
    Point topleft;
    float height, width;
    //transform
public:
    void consoleOutput();
    void graphicalOutput();
    Rectangle();
};
