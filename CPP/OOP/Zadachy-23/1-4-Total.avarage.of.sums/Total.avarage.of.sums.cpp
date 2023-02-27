#include <iostream>
#include <sstream>
#include <vector>

class Student{
    public:
    std::string name;
    std::string surName;
    double totalAvarage;
    Student(std::string name, std::string surName, double totalAvarage) : name(name), surName(surName), totalAvarage(totalAvarage) {}

    void print(std::ostream &oStr);
};

   void Student::print(std::ostream &oStr) {
    oStr << this->name << " " << this->surName << " " << totalAvarage << '\n';
   }


int main() {
    std::vector<Student> students;
    int count;
    double totalAvarageSum;
    std::cin >> count;
    if(count<= 0) {
        std::cout << "Invalid input" << std::endl;
        return 0;
    }
    std::string name;
    std::string surName;
    double totalAvarage;
    for(int i = 0; i < count;i++) {
    std::cin >> name>> surName>>totalAvarage;
    totalAvarageSum += totalAvarage;
    Student buf(name, surName, totalAvarage);
    buf.print(std::cout);
    students.push_back(buf);
    }
    std::cout<<totalAvarageSum/count<<std::endl;
    return 0;
}