// Create a program to find the sum of even numbers from 1 to N using a while loop.
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, i = 1; // Declare variables 'n' for the input number, 'sum' to store the sum, and 'i' for iteration.

    cout << "Print the sum of even numbers till: ";
    cin >> n; // Read the user's input and store it in the 'n' variable.

    while (i <= n) { // Start a while loop that runs from 1 to 'n'.
        if (i % 2 == 0) { // Check if 'i' is an even number.
            sum = sum + i; // Add 'i' to the 'sum' variable.
            cout << i << endl; // Print the even number.
        }
        i++; // Increment 'i' for the next iteration.
    }

    cout << "Sum of even numbers from 1 to " << n << " is: " << sum << endl; // Display the sum of even numbers.

    return 0; // Return 0 to indicate successful execution of the program.
}

