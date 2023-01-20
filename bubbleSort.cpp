// Bubble Sort program for sorting arrays
// language: C++

#include <iostream>
using namespace std;
// bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j; 
    for (i = 0; i < n-1; i++){
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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
    int arr[] = {13,2,-6,5,0};
    int N = sizeof(arr) / sizeof(arr[0]);
    cout << "\nOriginal array\t";
    printArray(arr,N);
    cout << "\nSorted array\t";
    bubbleSort(arr,N);
    printArray(arr,N);

    return 0;
}