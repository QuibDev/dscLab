// import for c++
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n, x;
    cout << "enter list lenght: ";
    cin >> n;
    
    // declare list 
    int arr[n];
    
    // populate list if n is valid 
    if (n>0){
        for (int i = 0; i<n; i++){
            cout << "\nenter " << i << " element ";
            cin >> arr[i];
            x++;
        }
        
         cout << "\n>>Entered List ";
                for (int i = 0; i<n; i++){
                    cout << arr[i] << " ";
            }

        int flag = 1;

        while (flag != 0) {

        int ch;      

        cout << "\n";
        cout << "\nMenu";
        cout << "\n1: Add Element at start";
        cout << "\n2: Add Element at end";
        cout << "\n3: Add Element at index";
        cout << "\n4: Circular Left Shift";
        cout << "\n5: Circular Right Shift";
        cout << "\n6: Display";
        cout << "\n7: Sort [Ascending]";
        cout << "\n8: Quit";
        cout << "\n";

        cout << "\nEnter The Desired Operation: ";
        cin >> ch;

        switch(ch){
            case 1: { //   Add at start 
                int p; 
                cout << "\nEnter element: ";
                cin >> p;

                //Right shift  
                for (int i = n-1; i>=0; i--){
                    arr[i] = arr[i-1];
                }

                //add at first index
                arr[0] = p;

                 cout << "\nNew List ";
                for (int i = 0; i<n; i++){
                    cout << arr[i] << " ";
                }

                break;

            }
            case 2: { // Add at end

                int p; 
                cout << "\nEnter element: ";
                cin >> p;

                //Right shift  
                for (int i = 0; i<n-1; i++){
                    arr[i] = arr[i+1];
                }

                //add at first index
                arr[n-1] = p;

                 cout << "\nNew List ";
                for (int i = 0; i<n; i++){
                    cout << arr[i] << " ";
                }

                break;
                
            }
            case 3: { //   Add at specific location 
                int elem,p; 
                cout << "\nEnter index: ";
                cin >> p;
                cout << "\nEnter element: ";
                cin >> elem;

                //Right shift  
                for (int i = n-1; i>=p; i--){
                    arr[i] = arr[i-1];
                }

                //add at said index
                arr[p] = elem;

                 cout << "\nNew List ";
                for (int i = 0; i<n; i++){
                    cout << arr[i] << " ";
                }

                break;
            }
            case 4: { // Circular left shift  

                 cout << "\nOriginal List: ";
                for (int i = 0; i<n; i++){
                    cout << arr[i] << " ";
                }

                int temp = arr[0];
                for (int i = 0; i<n-1; i++){
                    arr[i] = arr[i+1];
                }
                arr[n-1] = temp;

                 cout << "\nCircular Left Shifted List ";
                for (int i = 0; i<n; i++){
                    cout << arr[i] << " ";
                }
                break;

            }
            case 5: { //   Circular right shift 
            
                 cout << "\nOriginal List: ";
                for (int i = 0; i<n; i++){
                    cout << arr[i] << " ";
                }

                int temp = arr[n-1];
                for (int i = n-1; i>=0; i--){
                    arr[i] = arr[i-1];
                }
                arr[0] = temp;


                 cout << "\nCircular Right Shifted List: ";
                for (int i = 0; i<n; i++){
                    cout << arr[i] << " ";
                }
                break;
            }
            case 6: { // display
                 cout << "\nCurrent List ";
                for (int i = 0; i<n; i++){
                    cout << arr[i] << " ";
                } 
                break;
            }
            case 7: { //   sort 

                int temp = 0; 

                for (int i = 0; i < n; i++){
                    if (arr[i] > arr[i+1]){
                        temp = arr[i];
                        arr[i] = arr[i+1];
                        arr[i+1] = temp;
                    }
                }

                 cout << "\nSorted List ";
                for (int i = 0; i<n; i++){
                    cout << arr[i] << " ";
                }

                break;

            }
            case 8: { // quit
                cout << "\nQuitting program!!\n";
                flag = 0;
                break;
            }
        }

        }
    }
}
