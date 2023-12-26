// Write a C++ program to search for an element in an array using linear search.
#include <iostream>
using namespace std;
int main() {
    int arr[] = {10,55,69,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int elementnum;
    cout << "Enter the element for linear search....";
    cin >> elementnum;
    bool found = false;
    int index = -1;

    for (int i = 0; i < n; i++){
    if (arr[i] == elementnum) 
        {
            found = true;
            index = i;
            break; 
        }
    }

    if (found){
        cout << " linear search " << elementnum << " found at index " << index << endl;
    }else{
        cout << "linear search " << elementnum <<" Sorry not found " << endl;
    }

    return 0;
}
