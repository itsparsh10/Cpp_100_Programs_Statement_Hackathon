#include<iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 4; i++) { // Outer loop controls the number of rows.

        for (int j = 1; j <= i; j++) { // Inner loop prints the value of 'i' in each row.
            cout << i;
        }

        cout << endl; // Move to the next line after completing a row.
    }

    return 0; // Return 0 to indicate successful execution of the program.
}






