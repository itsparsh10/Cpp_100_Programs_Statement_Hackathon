#include <iostream>
using namespace std;

int main() {
    int n;

    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter the elements of the array:" <<endl;
    for (int i = 0; i < n; ++i) 
    {
        cin >> arr[i];
    }

    // Assume the array is sorted initially
    bool isSorted = true;

    // Check if the array is sorted in ascending order
    for (int i = 0; i < n - 1; ++i) 
    {
        if (arr[i] > arr[i + 1]) 
        {
            isSorted = false; // If a decreasing order is found, mark the array as not sorted.
            break; // Exit the loop early since we don't need to check further.
        }
    }

    if (isSorted) {
        cout<<"The array is sorted in ascending order." <<endl;
    } else {
        cout<<"The array is not sorted in ascending order." <<endl;
    }

    return 0;
}
