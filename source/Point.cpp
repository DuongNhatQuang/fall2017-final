//
//  Point.cpp
//  FinalCS202
//
//  Created by Daniel Nguyen on 12/3/17.
//  Copyright © 2017 Daniel Nguyen. All rights reserved.
//

#include "Point.hpp"

void rgbColor::colorOut()
{
    cout << "RGB(" << this->r << ", " << this->g << ", " << this->b << ") " << endl;
}

rgbColor::rgbColor(string rgbString)
{
    //Extract number from rgb string
//    string line("rgb(5,22,235)");
//    vector<string> strs;
//    boost::split(strs,line,boost::is_any_of("(,)"));
//    cout << "* size of the vector: " << strs.size() << endl;
//    for (int i=0; i<strs.size(); i++) {
//        cout<<i<<"."<<strs[i]<<endl;
//    }
//    vector<int>trippleInt;
//    cout<<"My tripple\n";
//    trippleInt.push_back(stoi(strs[1]));
//    trippleInt.push_back(stoi(strs[2]));
//    trippleInt.push_back(stoi(strs[3]));
//    for (int i=0; i<trippleInt.size(); i++) {
//        cout<<trippleInt[i]<<" ";
//    }
//    cout<<endl;

    vector<string> strs;
    boost::split(strs,rgbString,boost::is_any_of("(,)"));
    this->r=stoi(strs[1]);
    this->g=stoi(strs[2]);
    this->b=stoi(strs[3]);
}

void Point::pointOut()
{
    cout << "(" << this->x << ", " << this->y << ") " << endl;
}

Point::Point(double x, double y)
{
    this->x = x;
    this->y = y;
}

