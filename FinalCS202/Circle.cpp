//
//  Circle.cpp
//  FinalCS202
//
//  Created by Daniel Nguyen on 12/3/17.
//  Copyright © 2017 Daniel Nguyen. All rights reserved.
//

#include "Circle.hpp"

void Circle::circleOut()
//print circle attribute e.g: centre point <point>; radius <double>; Stroke <void colorOut()>; Stroke width <unsigned short>; Fill color < void colorOut()>
{
    cout << "Centre point: ";
    this->center.pointOut();
    cout << "Radius: " << this->radius << endl;
    cout << "Fill color: ";
    this->fillColor.colorOut();
    cout << "Stroke color: ";
    this->strokeColor.colorOut();
    cout << "Stroke width: " << this->strokeWidth << endl;
    return;
}
