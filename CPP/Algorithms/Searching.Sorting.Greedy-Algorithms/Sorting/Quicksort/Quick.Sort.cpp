//! Memory O(log(n))
//? Time O(n^2) // worst case
//* Stable : Depends on implementation we choose
// Performance is not very good -> it uses partitioning method and works with pivot element ( we choose 0 to be pivot )

#include <iostream>

void quickSort(int arr[],const int &size , int &start , int &end);

void print(const int arr[],const int &size );
void swapP(int arr[] , int &one, int &two);

int main(){
    int arr[] = {6,10,7,5,2,4,9,8,3};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int start = 0 , end = arr_size - 1;
    quickSort(arr, arr_size , start, end);
    print(arr, arr_size);
    return 0;
}

void quickSort(int arr[],const int &size , int &start , int &end){

    if(start >= end) return;

    int pivot = start;
    int left = start + 1;
    int right = end;
    while(left <= right){
        if(arr[left] > arr[pivot] && 
           arr[right] < arr[pivot]) 
           swapP(arr, left, right);

        if(arr[left]<= arr[pivot] ) left+=1;
        if(arr[right]>= arr[pivot] ) right-=1;
        }
    swapP(arr, pivot, right);

    int x = right - 1 , y = right + 1;
    if((x - start)> (end - y)) { //! recursion goes on smallest first always
    quickSort(arr, size, start, x);
    quickSort(arr, size,y, end);
    }
    else {
    quickSort(arr, size, y, end);  
    quickSort(arr, size, start, x);
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
