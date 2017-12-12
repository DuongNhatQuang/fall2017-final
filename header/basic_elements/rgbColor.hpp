#include <iostream>
#include <vector>
#include <string>
//#include <boost/algorithm/string.hpp>

using namespace std;

class rgbColor {
public:
    unsigned short r,g,b;
    void colorOut(); //endline
    rgbColor(string rgbString);
};