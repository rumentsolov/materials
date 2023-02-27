//! Memory O(1)
//? Time O(N*log(N)) // worst case
//* Stable : Yes
// Splitting on sub arrays untull he have multiple arrays with 1 element then assembles them into a single array by size

#include <iostream>


void merge(int arr[], int const left, int const mid, int const right);
void mergeSort(int arr[], int const begin, int const end);

void print(const int arr[],const int &size );

int main()
{
    int arr[] = { 6,10,7,5,2,4,9,8,3 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, arr_size - 1);
    print(arr, arr_size);
    return 0;
}
 
void mergeSort(int arr[], int const begin, int const end)
{
    if (begin >= end) return; // Returns recursively
 
    int mid = begin + (end - begin) / 2;
    mergeSort(arr, begin, mid); // left part
    mergeSort(arr, mid + 1, end); // right part
    merge(arr, begin, mid, end); 
}

void merge(int arr[], int const left, int const mid, int const right)
{
    int const frstSz = mid - left + 1;
    int const scndSz = right - mid;
 
    // Create temp arrays
    int *lArr = new int[frstSz]; // leftp[]
    int *rArr = new int[scndSz]; // rigth[]
 
    // Copy data to temp arrays left[] and right[]
    for (int i = 0; i < frstSz; i++) lArr[i] = arr[left + i];
    for (int j = 0; j < scndSz; j++) rArr[j] = arr[mid + 1 + j];
 
    int idx1  = 0 , idx2 = 0, idxMerged = left; // index Of tmp arr[] 1 ,  index Of tmp arr[] 2 , index Of Merged arr[] 

    // Merge the temp arrays back into arr[left[]..right[]]
    while (idx1 < frstSz && idx2 < scndSz) {
        if (lArr[idx1]<= rArr[idx2]) {
            arr[idxMerged] = lArr[idx1];
            idx1++;
        }
        else {
            arr[idxMerged] = rArr[idx2];
            idx2++;
        }
        idxMerged++;
    }
    // Copy the remaining elements of left[], if there are any
    while (idx1 < frstSz) {
        arr[idxMerged] = lArr[idx1];
        idx1++;
        idxMerged++;
    }
    // Copy the remaining elements of right[], if there are any
    while (idx2 < scndSz) {
        arr[idxMerged] = rArr[idx2];
        idx2++;
        idxMerged++;
    }
    delete[] lArr;
    delete[] rArr;
}

void print(const int arr[],const int &size ){
    for(int i=0; i<size;i++) std::cout << arr[i] << " ";
    std::cout << std::endl;
    std::cout <<"************" << std::endl;
}