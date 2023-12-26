#include <iostream>
using namespace std;

int main() {
    int num; // Declare an integer variable 'num' to store the input number.

    cout << "Enter a number to check if it's divisible by 5 and 11: ";
    cin >> num; // Read the user's input and store it in the 'num' variable.

    // Check if the number is divisible by both 5 and 11 using the '&&' (logical AND) operator.
    if (num % 5 == 0 && num % 11 == 0) {
        cout << "The number is divisible by both 5 and 11." << endl; // Display a message if it's divisible by both.
    } else {
        cout << "The number is not divisible by both 5 and 11." << endl; // Display a message if it's not divisible by both.
    }

    return 0; // Return 0 to indicate successful execution of the program.
}