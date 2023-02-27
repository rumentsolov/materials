#include <iostream>
#include <sstream>
#include <cmath>
#include <iomanip> 

class Points{
    public:
    double EuclideanDistance;
    Points(std::istream& iStr);
    void calculateEuclideanDistance(int &x1, int &x2, int &y1, int &y2);
    void print();

};

Points::Points(std::istream& iStr){
    int x1, x2, y1, y2;
    std::string line;
    getline(iStr, line);
    std::istringstream iss1(line);
    iss1 >> x1 >> y1;
    getline(iStr, line);
    std::istringstream iss2(line);
    iss2 >> x2 >> y2;
    calculateEuclideanDistance(x1, x2, y1, y2);
}

void Points::calculateEuclideanDistance(int &x1, int &x2, int &y1, int &y2){
    EuclideanDistance = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
    print();
};

void Points::print(){
    std::cout << std::fixed << std::setprecision(3) <<EuclideanDistance << std::endl;
}

int main(){

Points getPoints(std::cin);

return 0;
}