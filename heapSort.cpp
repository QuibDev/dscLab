// heap Sort program for sorting arrays
// language: C++

#include <iostream>
using namespace std;




void heapify(int arr[], int N, int i)
{
 
    // Initialize largest as root
    int largest = i;
 
    int l = 2 * i + 1;
 
    int r = 2 * i + 2;
 
    // If left child is larger than root
    if (l < N && arr[l] > arr[largest])
        largest = l;
 
    // If right child is larger than root
    if (r < N && arr[r] > arr[largest])
        largest = r;
 
    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);
 
        // Recursively heapify the affected
        // sub-tree
        heapify(arr, N, largest);
    }
}
 
// heap sort
void heapSort(int arr[], int N)
{
 
    // Build heap (rearrange array)
    for (int i = N / 2 - 1; i >= 0; i--)
        heapify(arr, N, i);
 
    // One by one extract an element from heap
    for (int i = N - 1; i > 0; i--) {
 
        // Move current root to end
        swap(arr[0], arr[i]);
 
        // call max heapify on the reduced heap
        heapify(arr, i, 0);
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
    heapSort(arr,N);
    printArray(arr,N);

    return 0;
}