#include <iostream>
#include <sstream>
#include <cmath>
#include <iomanip> 

class Point{
    public:
    int x, y;
    double EuclideanDistance;
    Point(std::istream& iStr);
    void calculateEuclideanDistance(Point & other);
    void print();

};

Point::Point(std::istream& iStr){
    std::string line;
    getline(iStr, line);
    std::istringstream iss1(line);
    iss1 >> x >> y;
}

void Point::calculateEuclideanDistance(Point & other){
    EuclideanDistance = sqrt(pow((this->x - other.x),2) + pow((this->y - other.y),2));
    print();
};

void Point::print(){
    std::cout << std::fixed << std::setprecision(3) <<EuclideanDistance << std::endl;
}

int main(){
 
Point one(std::cin);
Point two(std::cin);

one.calculateEuclideanDistance(two);

return 0;
}