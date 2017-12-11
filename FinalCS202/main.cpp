//
//  main.cpp
//  FinalCS202
//
//  Created by Daniel Nguyen on 12/3/17.
//  Copyright © 2017 Daniel Nguyen. All rights reserved.
//

#include <iostream>
#include "Line.hpp"
#include "Circle.hpp"
#include <sstream>
#include <boost/algorithm/string.hpp>
#include <vector>
#include <string>
using namespace std;
using namespace boost;
int main(int argc, const char * argv[]) {
    cout<<"----Line-----\n";
    Line l(2, 3, 4, 5, "rgb(4,2,225)",4);
    l.lineOut();
    cout<<"-----Circle----\n";
    Circle c(3,5,10,"rgb(6,23,22)","rgb(6,2,3",10);
    c.circleOut();
    return 0;
}
