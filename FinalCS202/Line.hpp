//
//  Line.hpp
//  FinalCS202
//
//  Created by Daniel Nguyen on 12/3/17.
//  Copyright © 2017 Daniel Nguyen. All rights reserved.
//

#ifndef Line_hpp
#define Line_hpp
#include "Point.hpp"
class Line {
private:
    Point p1;
    Point p2;
    rgbColor strokeColor;
    unsigned short strokeWidth;
public:
    Line(double x1, double y1, double x2, double y2,string sColor,unsigned short width):p1(x1,y1),p2(x2,y2),strokeColor(sColor),strokeWidth(width)
    {
        
    }
    void lineOut(); //print line attribute e.g: start point <point>; end point <point>; Stroke <void colorOut()>; Stroke width <unsigned short>;
    
};

#endif /* Line_hpp */
