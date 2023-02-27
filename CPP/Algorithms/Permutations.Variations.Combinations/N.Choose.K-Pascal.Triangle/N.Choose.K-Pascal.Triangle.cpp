#include <iostream>

int getBinom(int n,int k);

int main(){

    int n, k ;
    std::cin >> n >> k;
    std::cout << getBinom(n,k) << std::endl;
    return 0;
}

int getBinom(int row,int col) {

if(row <= 1 || col == 0 ||col == row) return 1; 

return getBinom(row - 1,col) + getBinom(row - 1, col - 1) ;

}