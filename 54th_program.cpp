#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>cols;

    // Declare a 2D array with the given number of rows and columns
    int arr[rows][cols];

    // Input elements into the 2D array
    cout << "Enter elements of the 2D array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin>>arr[i][j];
        }
    }

    // Calculate the sum of the main diagonal elements
    int sum = 0;
    for (int i = 0; i < rows && i < cols; ++i) 
    {
        sum += arr[i][i]; // Add the element at the current row and column index to the sum.
    }

    // Display the sum of the main diagonal elements
    cout<<"Sum of main diagonal elements: " << sum <<endl;

    return 0;
}
