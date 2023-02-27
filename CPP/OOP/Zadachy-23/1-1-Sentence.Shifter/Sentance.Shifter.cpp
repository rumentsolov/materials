#include <iostream>
#include <sstream>
#include <vector>

class Sentance {

    public:
    std::vector<std::string> sentences;
    int shifter;
    Sentance(std::istream &iStr);
    void shift();
    void print(std::ostream & oStr);
    
};

void Sentance::print(std::ostream & oStr) {
    for(auto i : sentences) {
        oStr << i << std::endl;
    }
}

void Sentance::shift() {
    for(int i = 0; i < shifter;i++) {
        std::vector<std::string>::iterator it = sentences.begin();
        sentences.insert(it, sentences[sentences.size()-1]);
        sentences.pop_back();
    }

    print(std::cout);
}


Sentance::Sentance(std::istream &iStr) {
    std::string buf;
    getline(iStr, buf);

    std::istringstream iss(buf);
    while(iss >> buf) {
        sentences.push_back(buf);
    }
    getline(iStr, buf);
    std::istringstream iss2(buf);
    iss2 >> shifter;

    shift();
}


int main(){

    Sentance sent(std:: cin);
    
    

    return 0;
}