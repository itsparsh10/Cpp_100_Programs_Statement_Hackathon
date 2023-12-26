// Define an array and find the second largest element in it.

#include <iostream>
#include <algorithm> // algorithm library is used for sorting
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " numbers: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Sort the array in ascending order
    sort(arr, arr + n);
    cout << "Numbers in ascending order: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    if (n < 2)
    {
        cout << "There is no second largest number." << endl;
    }
    else
    {
        cout << "The second largest number is: " << arr[n - 2] << endl;
    }
    return 0;
}
