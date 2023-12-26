// Create a program to find the largest element in each row of a matrix.

#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int matrix[rows][cols];
    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cin >> matrix[i][j];
        }
    }
    // Find and print the largest element in each row
    cout << "Largest element in each row:" << endl;
    for (int i = 0; i < rows; ++i)
    {
        int largest = matrix[i][0]; // Initialize with the first element in the row
        for (int j = 1; j < cols; ++j)
        {
            if (matrix[i][j] > largest)
            {
                largest = matrix[i][j];
            }
        }
        cout << "Row " << i + 1 << ": " << largest << endl;
    }
    return 0;
}