// Calculate the factorial of a number using memoization.

#include <iostream>
using namespace std;

unsigned long long factorial(int n) {
    // If n is 0 or 1, then the factorial is 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Otherwise, the factorial is n times the factorial of n - 1.
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
     // Declare a variable to store the user input.
    cout << "Enter a positive integer: ";
    cin >> n;
// Check if the user input is a negative number.
    if (n < 0) {
      cout << "Factorial is not defined for negative numbers." ;
    } else {
        unsigned long long result = factorial(n);
        cout << "Factorial of " << n << " is " << result << endl;
    }

    return 0;
}


