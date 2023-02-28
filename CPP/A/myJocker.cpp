#include "libs.h"

//! things I often forgot about...

//! NULL pointer
int* findFirstNegativePtr(int numbers[], int length) {
    for (int i = 0; i < length; i++) {
        if (numbers[i] < 0) {
        return &numbers[i];
        }
    }
  return nullptr;
}

//! Const expressions
//? type * ptr ->> Memoery & address editable
//? const type * ptr ->> Address editable only
//? type * const ptr ->> Memoery editable only
//? const type * const ptr ->> not editable

void referencing(){
int a = 42, b = 13; // let's assume &b == 0x69fef4
int* ptr = &a; // points to a
ptr = &b; // points to b

}

void deReferencing(){
int a = 42; 
int* ptr = &a;
*ptr = 7; // a is now 7
std::cout << *ptr; // prints 7
}


void matrix(){
int matrix[][3] = { { 11, 12, 13 },  { 21, 22, 23 } };
int cube[2][3][4] = {   { {111, 112, 113, 114}, {121, 122, 123, 124}, {131, 132, 133, 134} },   { {211, 212, 213, 214}, {221, 222, 223, 224}, {231, 232, 233, 234} }};

//? operations:
const int intMatrixRows = 2;
const int intMatrixCols = 3;

//Example 1
int r, c;
for(r=0 ; r < intMatrixRows; r++) {
  for(c=0 ; c < intMatrixCols ; c++ )
  std::cout << matrix[r][c] << "";
  std::cout << std::endl; }

//Example 2
for(auto & row : matrix) {
  for(auto & column : row )
  std::cout << column << " ";
  std::cout << std::endl; }
}

void numberExtractions(){
int number = 918293897;
int units = number % 10 ; // единици
int tens = number / 10 % 10 ; // десетици
int hundreds = number / 100 % 10 ; // стотици
int thousands = number / 1000 ; // хилядни
}

//! can swap int||char||bool||double
template<typename T>
void Swap(T& a, T& b ) {
T temp = a;
a = b;
b - temp; }



int main(){

    //! ARITHMETICS WITH SECOND VALUE IN MAP
    std::map<std::string,double> points;
    points.insert(std::pair<std::string,double>("Plovdiv", 6.80 ));
    points["Plovdiv"] += 2.0;

    for (auto i : points) {
        std::cout << i.first << ' ' << i.second << std::endl;
    }

    //! Arrays
    int arr1[200] = {0};
    int arr2[6] = { 10, 20, 30, 40 }; // the rest will 0
    std::cout << arr2[2] << std::endl;




    return 0;
}