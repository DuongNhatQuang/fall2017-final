#ifndef rgbColor_hpp
#define rgbColor_hpp

#include <vector>
#include <string>
//#include <boost/algorithm/string.hpp>

using namespace std;

class rgbColor {
public:
    unsigned short r,g,b;
    void colorOut();
    rgbColor(string rgbString);
    //!
    ~rgbColor(); //check this
};

#endif