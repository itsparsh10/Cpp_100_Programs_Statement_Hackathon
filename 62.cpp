// c++ program to get an array from the user and print odd and even elements in different arrays
#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter the size of the array : ";
    cin >> size;

    if (size <= 0)
    {
        cout << "Invalid array . Please enter a positive integer." << endl;
        return 1; // Exit with an error code
    }

    int originalArray[size];
    int evenArray[size]; // Array to store even numbers
    int oddArray[size];  // Array to store odd numbers

    int evenCount = 0; // Count of even numbers
    int oddCount = 0;  // Count of odd numbers

    // Input elements into the originalArray
    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> originalArray[i];
    }

    // Display the elements of the array
    cout << "Elements in the array: |";
    for (int i = 0; i < size; i++)
    {
        cout << originalArray[i] << " ";
    }
    cout << "|";
    cout << endl;

    // Separate odd and even numbers into separate arrays
    for (int i = 0; i < size; i++)
    {
        if (originalArray[i] % 2 == 0)
        {
            evenArray[evenCount] = originalArray[i];
            evenCount++;
        }
        else
        {
            oddArray[oddCount] = originalArray[i];
            oddCount++;
        }
    }

    // Display even numbers
    cout << "Even numbers: |";
    for (int i = 0; i < evenCount; i++)
    {
        cout << evenArray[i] << " ";
    }
    cout << "|" << endl;

    // Display odd numbers
    cout << "Odd numbers: |";
    for (int i = 0; i < oddCount; i++)
    {
        cout << oddArray[i] << " ";
    }
    cout << "|" << endl;

    return 0;
}