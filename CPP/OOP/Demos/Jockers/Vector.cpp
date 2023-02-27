#include <iostream>
#include <vector>
#include <algorithm> // FOR STD SORT

void print(const std::vector <int> & numbers);
void print(const std::vector <std::string> & words);
void insert(std::vector <int> & numbers);
void vectorFromVector(std::vector < std::vector <std::string> >& data);
// alphabetical sort
bool mycomp(std::string a, std::string b) {return a < b;}
void alpabeticalSort(std::vector <std::string> & names) { sort(names.begin(), names.end(), mycomp); }

int main() {

//? Inserts item to vector

std::vector<int> vec1 = {0, 1, 2, 3 , 4};
insert(vec1);
print(vec1);

std::vector<std::string> words {"the", "quick", "purple", "fox"};
alpabeticalSort(words);
print(words);

    return 0;
}

void insert(std::vector <int> & numbers ) {
    int index = 3;
    int item = 55;
    numbers.insert(numbers.begin() + index, item); 
} 

void print(std::vector <int> & numbers) {

    for (std::vector<int>::iterator i = numbers.begin(); i != numbers.end(); i++)
    std::cout << *i << " ";
    std::cout  << std::endl;
}

void print(const std::vector <std::string> & words) {
    for (std::vector<std::string>::iterator i = words.begin(); i != words.end(); i++)
    std::cout << *i << " ";
    std::cout  << std::endl;
}

void vectorFromVector(const std::vector < std::vector <std::string> >& data){
    for (std::vector < std::vector <std::string> > ::iterator itRows = data.begin(); itRows != data.end(); itRows++) {
    std::vector <std::string > & curRow = *itRows;
        for (std::vector <std::string> ::iterator itData = curRow.begin(); itData != curRow.end(); itData++) 
        std::cout << *itData << " ";
        std::cout << std::endl;
    }
}