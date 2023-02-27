//! Memory O(1)
//? Time O(n^2) // worst case
//* Stable : Yes
// Performance is not very good -> swapping cells from end to beggining

#include <iostream>

void insertionSort(int arr[],const int &size);

void print(const int arr[],const int &size );
void swapP(int arr[] , int &one, int &two);

int main(){
    int arr[] = {6,10,7,5,2,4,9,8,3};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr,arr_size);
    print(arr,arr_size);
    return 0;
}

void insertionSort(int arr[],const int &size){
    for(int i = 1; i < size; i++){
        int x = i ;
        while(x > 0 && arr[x-1] > arr[x]){
            int y = x - 1;
            swapP(arr, x, y);
            x-=1;
        }
    }
}

void print(const int arr[],const int &size ){
    for(int i=0; i<size;i++) std::cout << arr[i] << " ";
    std::cout << std::endl;
    std::cout <<"************" << std::endl;
}

void swapP(int arr[] , int &one, int &two){
    int tmp = arr[one];
    arr[one] = arr[two];
    arr[two] = tmp;
}
