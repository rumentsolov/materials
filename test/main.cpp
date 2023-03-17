#include <iostream>
#include "vector"
#include <string>


int main() {

	std::string str ("Test string that is too long");
	std::cout << "size: " << str.size() << "\n";
	std::cout << "length: " << str.length() << "\n";
	std::cout << "capacity: " << str.capacity() << "\n";
	std::cout << "max_size: " << str.max_size() << "\n";

	std::vector<std::string> newVecStr;
	std::vector<int> newVectorI;

	std::cout<<newVecStr.size()<<std::endl;
	std::cout<<newVectorI.size()<<std::endl;



	return 0;
}
