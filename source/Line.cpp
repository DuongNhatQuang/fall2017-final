//
//  Line.cpp
//  FinalCS202
//
//  Created by Daniel Nguyen on 12/3/17.
//  Copyright © 2017 Daniel Nguyen. All rights reserved.

#include "Line.hpp"

void Line::lineOut()
//print line attribute e.g: start point <point>; end point <point>; Stroke <void colorOut()>; Stroke width <unsigned short>;
{
    cout << "Starting point: ";
    this->p1.pointOut();
    cout << "Ending point: ";
    this->p2.pointOut();
    cout << "Stroke color: ";
    this->strokeColor.colorOut();
    cout << "Stroke width: " << this->strokeWidth << endl;
    return;
}

