//
//  Line.hpp
//  FinalCS202
//
//  Created by Daniel Nguyen on 12/3/17.
//  Copyright © 2017 Daniel Nguyen. All rights reserved.
//

#ifndef Line_hpp
#define Line_hpp
class Line : public Shape
{
private:
    Point p1;
    Point p2;
public:
    Line(double x1, double y1, double x2, double y2, string sColor, unsigned short width)
    //call constructors of p1, p2, Shape
    {
        
    }
    void consoleOutput();
    void graphicalOutput();
};

#endif /* Line_hpp */
