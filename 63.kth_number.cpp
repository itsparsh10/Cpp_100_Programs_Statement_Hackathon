#include <iostream>
#include <algorithm> // Include the algorithm library for the 'sort' function
using namespace std;

int main() {
    int size, k, toggle = 0;

    cout << "Enter the size of the array: ";
    cin >> size; // Read the size of the array from the user.

    int arr[size]; // Declare an array of integers with the specified size.

    cout << "Enter " << size << " elements for the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Enter the " << i + 1 << "th element of the array: ";
        cin >> arr[i]; // Read and store each element of the array.
    }

    do {
        cout << "Enter the value of K (indexing starts from 1): ";
        cin >> k; // Read the value of K from the user.

        if (k >= 1 && k <= size) {
            // Sort the array in ascending order
            sort(arr, arr + size);

            // Find and display the k-th smallest element
            int kthSmallest = arr[k - 1];
            cout << "The " << k << "th smallest element is: " << kthSmallest << endl;
        } else {
            cout << "Invalid value of K (K should be between 1 and " << size << ")" << endl;
            toggle = 1; // Set toggle to 1 to repeat the input process if K is invalid.
        }
    } while (toggle);

    return 0; // Return 0 to indicate successful execution of the program.
}