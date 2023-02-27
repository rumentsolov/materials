//! Memory O(1)
//? Time O(n^2) // worst case
//* Stable : No
// Performance is not very good

#include <iostream>

void selectionSort(int arr[],const int &size);

void print(const int arr[],const int &size );
void swapP(int arr[] , int &one, int &two);

int main(){
    int arr[] = {6,10,7,5,2,4,9,8,3};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, arr_size);
    print(arr, arr_size);
    return 0;
}

void selectionSort(int arr[],const int &size){
    for(int i = 0; i < size; i++){
        int min = i;
        for(int j = 0; j < size; j++){
            if(arr[j] > arr[min]) min = j; // changin > with < will make it decreasing
            swapP(arr, i ,min);
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
