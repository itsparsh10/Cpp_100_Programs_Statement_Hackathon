#include <iostream>
using namespace std;

int main() {
    char str[100]; // Declare a character array 'str' to store the input string, assuming a maximum length of 100 characters.
    int length = 0; // Initialize a variable 'length' to store the length of the string.

    cout << "Enter a string: "; // Display a prompt message to the user.
    cin >> str; // Read the user's input and store it in the 'str' character array.

    // Calculate the length of the string by iterating through the characters until the null terminator '\0' is encountered.
    for (int i = 0; str[i] != '\0'; i++) {
        length++; // Increment the 'length' variable for each character in the string.
    }

    cout << "The length of the string is: " << length << endl; // Display the calculated length of the string.

    return 0; // Return 0 to indicate successful execution of the program.
}