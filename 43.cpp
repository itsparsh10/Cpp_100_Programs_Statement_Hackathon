// Implement a program to print a Pascal's triangle using nested loops.

#include <iostream>
using namespace std;
// Function to calculate and print Pascal's Triangle
void printPascalsTriangle(int numRows) {
    for (int i = 0; i < numRows; i++) {
        int number = 1;

        // Print leading spaces
        for (int j = 0; j < numRows - i; j++) {
            cout << "  ";
        }

        // Print the values in the current row
        for (int j = 0; j <= i; j++) {
            cout << "   " << number;
            number = number * (i - j)/(j + 1);
        }

        cout << endl;
    }
}

int main() {
    int numRows;

    cout << "Enter the number for Pascal Triangle: ";
    cin >> numRows;

    if (numRows <= 0) {
        cout << "Ohh Invalid input . Please enter a positive integer." << endl;
        return 1;
    }

    printPascalsTriangle(numRows);

    return 0;
}
