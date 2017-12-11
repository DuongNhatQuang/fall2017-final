//
//  Circle.hpp
//  FinalCS202
//
//  Created by Daniel Nguyen on 12/3/17.
//  Copyright © 2017 Daniel Nguyen. All rights reserved.
//

#ifndef Circle_hpp
#define Circle_hpp

#include "Point.hpp"

class Circle {
private:
    Point center;
    double radius;
    rgbColor fillColor;
    rgbColor strokeColor;
    unsigned short strokeWidth;
public:
    Circle(double cx,double cy,double r,string fColor,string sColor,unsigned short sWidth):center(cx,cy),radius(r),fillColor(fColor),strokeColor(sColor),strokeWidth(sWidth)
    {
        
    }
    void circleOut(); //print circle attribute e.g: centre point <point>; radius <double>; Stroke <void colorOut()>; Stroke width <unsigned short>; Fill color < void colorOut()>
};

#endif /* Circle_hpp */
