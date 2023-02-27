#include <iostream>
#include <sstream>

std::string elements;
std::string combinations;
int k;
std::string with;

void get_elements();
void combineWithRepetitions(int idx , int startIdx);
void combineWithoutRepetitions(int idx , int startIdx);

int main() {
    
    get_elements();
    
    if(with == "without"){
        std::cout << "Combine WithOut Repetitions" << std::endl;
        combineWithoutRepetitions(0,0); }
    else {
        std::cout << "Combine With Repetitions" << std::endl;
        combineWithRepetitions(0,0); }
    
    return 0;
}

void combineWithoutRepetitions(int idx , int startIdx){
    if (idx >= k){ 
            std::cout << combinations << std::endl;
            return;}
    else {
            for (int i = startIdx; i < elements.length(); i++){
            combinations[idx] = elements[i];
            combineWithoutRepetitions(idx + 1, i + 1);

        }
    }
}

void combineWithRepetitions(int idx , int startIdx) {
    if (idx >= k){ 
            std::cout << combinations << std::endl;
            return;}
    else {
            for (int i = startIdx; i < elements.length(); i++){
            combinations[idx] = elements[i];
            combineWithoutRepetitions(idx + 1, i );

        }
    }
}

void get_elements(){
    getline(std::cin, with);
    std::string buf;
    char c;
    getline(std::cin, buf);
    std::stringstream sStream(buf);
    while(sStream >> c) {
        elements += c;
    }
    getline(std::cin, buf);
    std::stringstream sStream2(buf);
    sStream2 >> k;
    for(int i = 0; i < k; i++) combinations += '-';
}
