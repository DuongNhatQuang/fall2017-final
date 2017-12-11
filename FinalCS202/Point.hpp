//
//  Point.hpp
//  FinalCS202
//
//  Created by Daniel Nguyen on 12/3/17.
//  Copyright © 2017 Daniel Nguyen. All rights reserved.
//

#ifndef Point_hpp
#define Point_hpp

#include <iostream>
#include <vector>
#include <string>
#include <boost/algorithm/string.hpp>
using namespace std;

class rgbColor {
public:
    unsigned short r,g,b;
    void colorOut(); //endline
    rgbColor(string rgbString);
};

class Point {
private:
    double x,y;
public:
    Point(double x, double y);
    void pointOut(); //print point to console e.g: A(1, 1) + endline
};


#endif /* Point_hpp */
