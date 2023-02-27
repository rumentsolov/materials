#include <iostream>
#include <string>
#include <sstream>
#include <vector>

std::string elements;
std::string variations;
std::vector<bool> used;
int k;
std::string with;

void get_elements();
void variateWithRepetitions(int idx);
void variateWithoutRepetitions(int idx);

int main() {
    
    get_elements();
    
    if(with == "without"){
        std::cout << "Variate WithOut Repetitions" << std::endl;
        variateWithoutRepetitions(0);}
    else {
        std::cout << "Variatee With Repetitions" << std::endl;
        variateWithRepetitions(0); }
    
    return 0;
}

void variateWithoutRepetitions(int idx){
    if (idx >= k){ 
            std::cout << variations << std::endl;
            return;}
    else {
            for (int i = 0; i < elements.length(); i++){
            if(!used[i]) {
            used[i] = true;
            variations[idx] = elements[i];
            variateWithoutRepetitions(idx + 1);
            used[i] = false; }
        }
    }
}

void variateWithRepetitions(int idx) {
  if (idx >= k){
            std::cout << variations << std::endl;
            return;}
    else {
            for (int i = 0; i < elements.length(); i++){
            variations[idx] = elements[i];
            variateWithoutRepetitions(idx + 1);
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
        used.push_back(false);
    }
    getline(std::cin, buf);
    std::stringstream sStream2(buf);
    sStream2 >> k;
    for(int i = 0; i < k; i++) variations += '-';
}
