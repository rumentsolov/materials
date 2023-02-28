#include "libs.h"
int main(){

    //! ARITHMETICS WITH SECOND VALUE IN MAP
    std::map<std::string,double> points;
    points.insert(std::pair<std::string,double>("Plovdiv", 6.80 ));
    points["Plovdiv"] += 2.0;

    for (auto i : points) {
        std::cout << i.first << ' ' << i.second << std::endl;
    }


    return 0;
}