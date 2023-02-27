#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>

void writeToFL1(std::string totalString, const char* newFile);
void writeToFL2();
void writeToFL3();
void readFromFL();

std::string mainPath = "C:/";
std::string pathStr = mainPath.c_str();
std::string recordName = "record.txt";
std::string fileString = pathStr + recordName;

const char* recordFile = fileString.c_str();


int main() {

    std::string mystr(“2023”); 
    int myInt; 
    std::stringstream(mystr)>>myInt;

    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);

  // READING OPTION 1
    std::istringstream in1("a word");
    std::string line1;
    getline(in1, line1);
    std::cout << line1 << std::endl; // a word
  // READING OPTION 2
    std::istringstream in2("a.word.end");
    std::string line2;
    while(getline(in2, line2, '.')) // reads everything splitted by '.'
    std::cout << line2 << std::endl; 


    std::ostringstream osTr;
    osTr << std::fixed;
    osTr << std::setprecision(2);
    writeToFL1(osTr.str(), recordFile);
    writeToFL2();
    writeToFL3();
    readFromFL();

     // PRINT STREAMS
    std::cout << osTr.str() << std::endl;
    
    return 0;
}

void writeToFL1(std::string sString, const char* newFile) {
    std::fstream file;
    file.open(newFile, std::ios::out | std::ios::app);
    if (!file.is_open()) {
        std::ofstream out(newFile);
    }
    else
    {
        file << sString << std::endl << std::endl;
        file.close();
    }
}

void writeToFL2() {
    std::ifstream input;
    // NOTE: the file input.txt should exist in the directory where
    //the binary file is created and run!
    input.open("input.txt");

    //IMPORTANT: always make an error check
    if(!input.is_open())
    {
     std::cerr << "input.txt file could not be found" << std::endl;
    }

    int a, b;
    input >> a >> b;

    std::ofstream output;
    output.open("output.txt", std::ofstream::app);
    output << a + b << std::endl;
}

void readFromFL() {
    std::ifstream input;
    input.open("input.txt");
    int a, b;
    input >> a >> b; 
    input.close();
}

void writeToFL3() {
    int a, b;
    std::ofstream output;
    output.open("output.txt");
    output << a + b << std::endl; 
    output.close();
}