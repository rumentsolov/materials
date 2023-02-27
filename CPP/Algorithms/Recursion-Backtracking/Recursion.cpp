#include <iostream>
#include <vector>
#include <sstream>

int sumRecursively(std::vector<int> array, int index);

int main() 
{
    std::string buf;
    std::vector<int> array;
    getline(std::cin, buf);
    std::stringstream sStr(buf);
    while(sStr) {
        int bufX;
        sStr >> bufX;
        array.push_back(bufX);

    }


      std:: cout << sumRecursively(array,0) << std::endl;
    return 0;
}


int sumRecursively( std::vector<int> array , int index) 
{
    //! Pre Operations

    int val;
    if (index == 9 ) 
    {
        val = array[index];
        return val; // Bottom
    } 

    //! Post Operations

    val = array[index] + sumRecursively(array, index +1 ); // Reverse Sum
    return val;
}