#ifndef Circle_hpp
#define Circle_hpp

#include "basic_elements/*"

class Circle : public Shape 
{
private:
    Point center;
    int radius;

public:
    Circle(double cx,double cy,double r,string fColor,string sColor,unsigned short sWidth):center(cx,cy),radius(r),fillColor(fColor),strokeColor(sColor),strokeWidth(sWidth)
    {
        
    }
    void consoleOutput();
    void graphicalOutput();
};

#endif /* Circle_hpp */
