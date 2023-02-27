//! Complexity O(N)

#include <iostream>


bool linearSearch(const int arr[], int &x , int &size);

int main(){
    int arr[] = {0,1,2,3,4,5,6,7};
    int x = 41 , size = sizeof(arr) / sizeof(arr[0]) ;
    std::cout << linearSearch(arr, x , size) << std::endl;
    return 0;
}

bool linearSearch(const int arr[], int &x , int &size){
    for(size_t i = 0; i < size; i++)
        if(arr[i]==x) return true;
     return false;}
