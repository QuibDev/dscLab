// insertion Sort program for sorting arrays
// language: C++

#include <iostream>
using namespace std;
// insertion sort
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i<n; i++){
        key = arr[i];
        j = i-1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1] = key;
    }
}

// function to print an array
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

// main method
int main(){

    // driver code 
    int arr[] = {13,2,6,5,0};
    int N = sizeof(arr) / sizeof(arr[0]);
    cout << "\nOriginal array\t";
    printArray(arr,N);
    cout << "\nSorted array\t";
    insertionSort(arr,N);
    printArray(arr,N);

    return 0;
}