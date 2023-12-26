#include <iostream>
using namespace std;

int main() {
    for (int i = 4; i > 0; i--) { // Outer loop controls the number of rows.

        for (int j = 1; j <= i; j++) { // Inner loop prints asterisks in each row.
            cout << "*"; // Print an asterisk.
        }

        cout << "\n"; // Move to the next line after completing a row.
    }

    return 0; // Return 0 to indicate successful execution of the program.
}