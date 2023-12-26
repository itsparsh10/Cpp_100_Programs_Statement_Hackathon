#include <iostream>
using namespace std;

int main() {
    int year; // Declare an integer variable 'year' to store the input year.
    cout << "Enter a year: "; // Display a prompt message to the user.
    cin >> year; // Read the user's input and store it in the 'year' variable.

    // Check if the year is a leap year using the leap year formula.
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << "Year is a leap year"; // Display a message if it's a leap year.
    } else {
        cout << "Year is not a leap year"; // Display a message if it's not a leap year.
    }

    return 0; // Return 0 to indicate successful execution of the program.
}