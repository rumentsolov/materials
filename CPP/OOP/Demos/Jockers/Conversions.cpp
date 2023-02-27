#include <iostream>
#include <fstream>
#include <sstream>


int main() {
    std::string mystr = "2023"; 

    stringToInt(mystr);

    

    return 0;
}

int stringToInt(std::string mystr) {
    int myInt; 
    std::stringstream(mystr)>>myInt;
    return myInt;
}