
#include<iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) { // Outer loop controls the number of rows.

        for (int j = 1; j <= i; j++) { // Inner loop prints consecutive numbers starting from 1.
            cout << j;
        }

        cout << endl; // Move to the next line after completing a row.
    }

    return 0; // Return 0 to indicate successful execution of the program.
}
