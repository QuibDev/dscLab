// quick Sort program for sorting arrays
// language: C++
// time complexity: T(n) = O(log n)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> v, int To_Find)
{
    int lo = 0, hi = v.size() - 1;
    int mid;
    // This below check covers all cases , so need to check
    // for mid=lo-(hi-lo)/2
    while (hi - lo > 1) {
        int mid = (hi + lo) / 2;
        if (v[mid] < To_Find) {
            lo = mid + 1;
        }
        else {
            hi = mid;
        }
    }
    if (v[lo] == To_Find) {
        cout << "Found"
             << " At Index " << lo << endl;
    }
    else if (v[hi] == To_Find) {
        cout << "Found"
             << " At Index " << hi << endl;
    }
    else {
        cout << "Not Found" << endl;
    }
}

 
int main()
{
    vector<int> v = { 1, 3, 4, 5, 6 };
    cout << "\nGiven array:\t {1 , 3 , 4 , 5 , 6 }\n";
    int To_Find = 1;
    cout << "\nSearching for: " << To_Find << "\n"; 
    binarySearch(v, To_Find);
    To_Find = 6;
    cout << "\nSearching for: " << To_Find << "\n"; 
    binarySearch(v, To_Find);
    To_Find = 10;
    cout << "\nSearching for: " << To_Find << "\n"; 
    binarySearch(v, To_Find);
    return 0;
}