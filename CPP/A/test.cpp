#include <iostream>
#include <vector>
#include <numeric>

int main(){

	int startNumber = 5 , size = 7;
	std::vector<int> sequence(size) ;
	std::iota(sequence.begin(), sequence.end(),startNumber);

	for(int i = 0; i < size; i++)std::cout << sequence[i] << " "; // result : 5 6 7 8 9 10 11
	
}