#include<iostream>
using namespace std;

// Function to calculate the square of a number 'n'
int square(int n) {
    return n * n;
}

// Function to calculate the cube of a number 'n'
int cube(int n) {
    return n * n * n;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n; // Read the user's input and store it in the 'n' variable.

    // Call the 'square' function to calculate the square of the input number and display the result.
    cout << "Square is: " << square(n) << endl;

    // Call the 'cube' function to calculate the cube of the input number and display the result.
    cout << "Cube is: " << cube(n) << endl;

    return 0; // Return 0 to indicate successful execution of the program.
}