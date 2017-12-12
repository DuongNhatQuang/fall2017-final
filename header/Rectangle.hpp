#include "basic_elements/*"

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