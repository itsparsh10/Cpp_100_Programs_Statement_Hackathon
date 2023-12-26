//c++ program to count frequency of each element in an array
#include <iostream>
using namespace std;

int main() 
{
    int n;
    
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];

    if (n <= 0)
    {
        cout << "Invalid array size. Please enter a positive integer." << endl;
        return 1; // Exit with an error code
    }

    // Input elements into the array
    for (int i = 0; i < n; i++) 
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Display the elements of the array
    cout << "Elements in the array: |";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<"|";
    cout << endl;

    // Initialize an array to store the frequency of each element
    int frequency[n];

    for (int i = 0; i < n; i++) 
    {
        frequency[i] = -1; // Initialize frequencies to -1
    }

    // Calculate the frequency of each element
    for (int i = 0; i < n; i++) 
    {
        int count = 1;
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                count++;
                frequency[j] = 0; // Mark as counted to avoid duplicate counting
            }
        }
        if (frequency[i] != 0) 
        {
            frequency[i] = count;
        }
    }

    // Display the frequency of each element
    cout << "Element\tFrequency" << endl;
    for (int i = 0; i < n; i++) 
    {
        if (frequency[i] != 0) 
        {
            cout << arr[i] << "\t" << frequency[i] << endl;
        }
    }

    return 0;
}