#include<iostream>
#include<sstream>
#include<string>
#include<map>
#include<vector>

using namespace std;

class Person {

        class Body {
            private:
            double heightMeters;
            double weightKgs;

            public:
            //! Decl Constructor type 1
            Body(double heightMeters, double weightKgs)  { this->heightMeters = heightMeters; this->weightKgs = weightKgs;
            }

            string getInfo() ;
            int getHeight() { return heightMeters; }
            int getWeight() { return weightKgs; }
            void increaseWeight(double kgs) { this->weightKgs += kgs; }
        };

    private:
        string name;
        int age = 0;
        Body body;
    
     public:
    Person() :
        body(0, 0) {
    }

    //! Decl Constructor type 2
    Person(string name, int age, double heightMeters, double weightKgs) :
        name(name),
        age(age),
        body(heightMeters, weightKgs) {
    }

        
    void makePersonOlder(int years) {this->age += years; }
    void makeHeavy(int kgs) {this->body.increaseWeight(kgs); } 

    void printPersonInfo() {
        cout << "name: " << this->name << ", age: " << this->age << ", height: " << body.getHeight() << ", weight: " << body.getWeight() << endl;
    }
};


string Person::Body::getInfo() {
    ostringstream info;
    info << "height: " << this->heightMeters << ", weight: " << this->weightKgs;
return info.str(); }


int main() {

    Person person("Met Hods", 42, 1.82, 82.3);

    person.printPersonInfo();

    Person * personPointer = &person;
    personPointer->makePersonOlder(1);
    personPointer->makeHeavy(9);
    personPointer->printPersonInfo();

    //!Enumerations
    enum planets {earth = 3, mars, jupiter, saturn, uranus, neptune}; // allows arritmestics
    enum class Planets : char {earth = 'e', mars = 'm', jupiter = 'j', saturn = 's', uranus = 'u', neptune = 'n'}; // doesnt allow arritmestics
    Planets planetEarthChar = Planets::earth;
    cout << (char)planetEarthChar << endl;


    //! Typedef
    typedef std::map<std::string, std::vector<int> > StudentScores;
    StudentScores judgeAssignment2Scores;
    judgeAssignment2Scores["ghost4e"] = {100, 100, 100, 100};
    judgeAssignment2Scores["Reclaimer"] = {100, 80, 0, 100};

    for (StudentScores::iterator i = judgeAssignment2Scores.begin(); i != judgeAssignment2Scores.end(); i++) {
        std::cout << i->first << " ";
        for (int score : i->second) std::cout << score << " ";
        std::cout << std::endl;
    }

    return 0;
}
