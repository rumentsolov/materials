//! Memory O(1)
//? Time O(n^2) // worst case
//* Stable : Yes
// Performance is not very good

#include <iostream>

void bubbleSortVer1(int arr[],const int &size);
void bubbleSortVer2(int arr[],const int &size);

void print(const int arr[],const int &size );
void swapP(int arr[] , int &one, int &two);

int main(){
    int arr[] = {6,10,7,5,2,4,9,8,3};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    bubbleSortVer1(arr,arr_size);
    print(arr,arr_size);
    bubbleSortVer2(arr,arr_size);
    print(arr,arr_size);
    return 0;
}

void bubbleSortVer1(int arr[],const int &size ){
    int sorted = 0; // for cycle to not check again sorted values
    bool isSorted = false;
    while(!isSorted){
        isSorted = true;
        for(int i = 1; i < size - sorted; i++){ //! 
            int x = i - 1;
            if(arr[x] > arr[i]){ //! changing < and > will make it decreasing
            swapP(arr, x , i);
            isSorted = false;
            }
        } 
        sorted++;
    }
}

void bubbleSortVer2(int arr[],const int &size ){
    for(int i = 0; i < size; i++) {
        for(int j = 1; j < size - i; j++){ //! 
            if(arr[i - 1] > arr[j]) {  //! changing < and > will make it decreasing
                int x = j - 1 ;
                swapP(arr, x, j);
            } 
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
