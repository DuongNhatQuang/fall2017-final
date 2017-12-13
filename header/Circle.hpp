#ifndef Circle_hpp
#define Circle_hpp

#include "basic_elements/Shape.hpp"

class Circle : public Shape 
{
private:
    Point center;
    int radius;

public:
    Circle(float oFill, string cFill, float oStroke, string cStroke, 
        int widthStroke, int centerx, int centery, int radius);
    void consoleOutput();
    void graphicalOutput();

    ~Circle();
};

#endif /* Circle_hpp */
