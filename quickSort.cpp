// quick Sort program for sorting arrays
// language: C++
// time complexity: T(n) = T(k) + T(n-k-1) + θ(n)

#include <iostream>
using namespace std;

// swaps two elements
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}


// Partitions the array based on the pivot element
int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // pivot
    int i = (low - 1); // Index of smaller element and indicates

  
    for (int j = low; j <= high - 1; j++) {
        // If current element is smaller than the pivot
        if (arr[j] < pivot) {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// quick sort
void quickSort(int arr[], int low, int high)
{
    if (low < high) {
        /* pi is partitioning index, arr[p] is now
        at right place */
        int pi = partition(arr, low, high);
  
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
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
    int arr[] = {14,3,7,8,-5,3,-34,5,0};
    int N = sizeof(arr) / sizeof(arr[0]);
    cout << "\nOriginal array\t";
    printArray(arr,N);
    cout << "\nSorted array\t";
    quickSort(arr,0,N-1);
    printArray(arr,N);

    return 0;
}