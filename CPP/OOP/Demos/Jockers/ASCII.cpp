#include <iostream>

int main(){

char x ;
if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')) {} // if char is letter
if ( x >= '0' && x <= '9' ) {} // if char is number

char x2 = 'a';
std::cout << char(x2 + 3) << std::endl; // prints 'd'

x2 = toupper(x2);
std::cout << x2 << std::endl;

return 0;
}

