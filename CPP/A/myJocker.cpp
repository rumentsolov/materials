#include "libs.h"

//! things I often forgot about...

    //! Template SWAP function : int||char||bool||double
    template<typename T>
    void Swap(T& a, T& b ) {
    T temp = a;
    a = b;
    b - temp; }

    void cout_precision(){
        std::cout.setf(std::ios::fixed);
        std::cout.precision(2);
    }

    void getNegativePtr(); //! NULL pointer
    int* findFirstNegativePtr(int numbers[], int length);//! NULL pointer;
    void referencesAndConst();
    void numberExtractions();
    void files(); //! Work with FILES
    void mapHack();//! ARITHMETICS WITH SECOND VALUE IN MAP
    void arrayS() ;//! Arrays
    void someStrings();//!Some rear strings
    void letterOrNumber();//!checks if letter or number
    
int main(){

    void referencesAndConst(); // References and Const
    void numberExtractions(); // arithmetics with digits
    void files(); // Work with FILES
    void mapHack();// ARITHMETICS WITH SECOND VALUE IN MAP
    void arrayS() ;// Arrays
    void cout_precision();//Precision
    void someStrings();//Some rear strings
    void letterOrNumber();//checks if letter or number
    

int a = 3 , b = 7;
Swap(a,b ) ; //! Template SWAP function

    return 0;
}

void getNegativePtr(){ //! NULL pointer
    int numbers[3] ={0};
    int length = 3;
    int* negativePtr = findFirstNegativePtr(numbers, 4);
    if (negativePtr != nullptr) {
    std::cout << *negativePtr;
    }
    else std::cout << "no negative numbers" << std::endl;
}

int* findFirstNegativePtr(int numbers[], int length) {
    for (int i = 0; i < length; i++) {
        if (numbers[i] < 0) {
        return &numbers[i];
        }
    }
  return nullptr;
}

void referencesAndConst(){
//! Const expressions
    //? type * ptr ->> Memoery & address editable
    //? const type * ptr ->> Address editable only
    //? type * const ptr ->> Memoery editable only
    //? const type * const ptr ->> not editable

//!referencing
    int a = 42, b = 13; // let's assume &b == 0x69fef4
    int* ptr = &a; // points to a
    ptr = &b; // points to b
//!dereferencing
    a = 42; 
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



//! FILES
void files(){
    std::ifstream input;
    //#NOTE: the file input.txt should exist in the directory where the binary file is created and run!
    input.open("input.txt");

    //?IMPORTANT: always make an error check
    if(!input.is_open()) {
    std::cerr << "input.txt file could not be found" << std::endl; } // cerr is std Output error message

    int a, b;
    input >> a >> b;

    std::ofstream output;
    output.open("output.txt", std::ofstream::app);
    output << a + b << std::endl;
}

//! ARITHMETICS WITH SECOND VALUE IN MAP
void mapHack(){
    std::map<std::string,double> points;
    points.insert(std::pair<std::string,double>("Plovdiv", 6.80 ));
    points["Plovdiv"] += 2.0;
    for (auto i : points) {
        std::cout << i.first << ' ' << i.second << std::endl;
    }
}

//! Arrays
void arrayS(){
    int arr1[200] = {0};
    int arr2[6] = { 10, 20, 30, 40 }; // the rest will 0
    std::cout << arr2[2] << std::endl;
}

//!Precision


//!Some rear strings
void someStrings(){
      
    int index = 2, length = 2;
    std::string sTr = "Rumen"; 
    std::cout << sTr.find("m", 1)<< std::endl; // prints 2
    std::cout << sTr.substr(index, length) << std::endl;
    //? C Strings
    char text[16] = { 'C','+','+',' ','P','r','o','g','r','a','m','m','i','n','g','\0' };
    char sameText[] = { 'C','+','+',' ','P','r','o','g','r','a','m','m','i','n','g', 0 };
    char sameTextAgain[] = "C++ Programming";
    char sameTextYetAgain[16] = "C++ Programming";

    char line1[50] = { 'h', 'e', 'l', 'l', 'o', ',', ' ','\0' };
    char line2[] = { 'w', 'o', 'r', 'l', 'd', '!', '\0' };

    //NOTE line1 should be big enough to hold the concatenated string
    //strcat_s(line1, line2);
    //std::cout << line1 << std::endl;

    char * result = strstr(line1, "world!"); //  points to first found letter from line1 that is equal to "world!"

    const int index = result - line1;

    std::cout << "world found at index: " << index << std::endl;

    *result = 'D'; // Dorld! instead of World! becouse points the first found letter from the string
    std::cout << result << std::endl;
}

void letterOrNumber(){
    std::string inp;
    std::ostringstream output;
    int sum = 0;

    for(int i = 0; i <inp.length(); i++){
        char x = inp[i];
        if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')) {// If I detected a letter!
            if (x >= 'a' && x <= 'z')
            x = toupper(x); // => 'x'-> 'X'
        }
        else if(x >= 0 && x <= 9) // we detected a non-letter
        sum+=inp[i];

        output << x;    
    }
}