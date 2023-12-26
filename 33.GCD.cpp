#include<iostream>
using namespace std;

int main() {
    int a, b; // Declare two integer variables 'a' and 'b' to store user inputs.
    cout << "Enter a value for a: ";
    cin >> a; // Read the value of 'a' from the user.
    cout << "Enter a value for b: ";
    cin >> b; // Read the value of 'b' from the user.

    int gcd = 1; // Initialize the GCD to 1, as all numbers have 1 as a common divisor.

    for (int i = 2; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i; // Update the GCD if 'i' is a common divisor of both 'a' and 'b'.
        }
    }

    cout << "GCD is: " << gcd << endl; // Display the calculated GCD.

    return 0; // Return 0 to indicate successful execution of the program.
}