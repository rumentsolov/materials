//! Complexity O(log(N))
//! data structure must be ordered

#include <iostream>

bool binarySearch(const int arr[], int &x ,const int &size );

int main(){
    int arr[]  = {0,1,2,3,4,5,6,7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int x = 7 ;
    std::cout << binarySearch(arr, x , arr_size) << std::endl;
    return 0;
}

bool binarySearch(const int arr[], int &x , const int &size){
    int left = 0, right = size;
    while(left <= right){
        int mid = (left + right) / 2;
        if(arr[mid] == x) return true;
        if(x > arr[mid]) left = mid + 1;
        else right = mid - 1;
    }
    return false;
}