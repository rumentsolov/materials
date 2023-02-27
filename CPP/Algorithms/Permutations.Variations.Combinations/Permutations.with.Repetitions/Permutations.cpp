#include <iostream>
#include <string>
#include <sstream>
#include <set>
#include <vector>

std::string elements;
std::vector<std::string> vec ;

void get_elements();
bool repetition();
void swap(const int &first, const int &second);
void permuteWithRepetitions(int idx);
void permuteWithoutRepetitions(int idx);
void print();
bool isUsed( std::set<int> used, int idx );

int main() {
    
    get_elements();
    
    if(repetition()){
        std::cout << "Permute WithOut Repetitions" << std::endl;
        permuteWithoutRepetitions(0);
        print(); }
    else {
        std::cout << "Permute With Repetitions" << std::endl;
        permuteWithRepetitions(0);
        print(); }
    
    return 0;
}

void permuteWithoutRepetitions(int idx)
{
    if (idx >= elements.length()){
        vec.push_back(elements);
        return;}

    permuteWithoutRepetitions(idx + 1);

    for (int i = idx + 1; i < elements.length(); i++){
        swap(idx, i);
        permuteWithoutRepetitions(idx + 1);
        swap(idx, i);}
}

void permuteWithRepetitions(int idx) {
    if (idx >= elements.length()){
        vec.push_back(elements);
        return;}

    permuteWithRepetitions(idx + 1); 

    std::set<int> used;
    used.insert(elements[idx]);

    for (int i = idx + 1; i < elements.length(); i++){
        if(!isUsed(used, i)){
        swap(idx, i);
        permuteWithRepetitions(idx + 1);
        swap(idx, i);
        used.insert(elements[i]); }
    }
}

void get_elements(){
    std::string buf;
    char c;
    getline(std::cin, buf);
    std::stringstream sStream(buf);
    while(sStream >> c) {
        elements += c;
    }
}

bool repetition(){
    for (int i = 0, j = elements.length(); i < j; i++)
      for (int k = i+1; k < j; k++) 
         if (elements[i] == elements[k])
            return false;
   return true;
}

void print(){
    for (std::vector<std::string>::iterator it = vec.begin(); it != vec.end(); it++)
    std::cout << *it <<std::endl;
    std::cout << "*******" << std::endl;
}

void swap(const int &first, const int &second) {
    char tmpE = elements[first];
    elements[first] = elements[second];
    elements[second] = tmpE; }

bool isUsed(std::set<int> used, int idx) {
    for (std::set<int>::iterator it = used.begin(); it != used.end(); it++) if(*it == idx) return true;
    return false;
    }
    

