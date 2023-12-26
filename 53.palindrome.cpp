
#include <iostream>
#include <string>
using namespace std;

// Function to check if a string is a palindrome
bool isPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        // Ignore non-alphanumeric characters from the left
        while (left < right && !isalnum(str[left])) {
            left++;
        }

        // Ignore non-alphanumeric characters from the right
        while (left < right && !isalnum(str[right])) {
            right--;
        }

        // Compare the characters (case-insensitive)
        if (tolower(str[left]) != tolower(str[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true; // If the loop completes without returning false, it's a palindrome.
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input; // Read the user's input and store it in the 'input' string.

    if (isPalindrome(input)) {
        cout << "\"" << input << "\" is a palindrome." << endl; // Display a message if it's a palindrome.
    } else {
        cout << "\"" << input << "\" is not a palindrome." << endl; // Display a message if it's not a palindrome.
    }

    return 0; // Return 0 to indicate successful execution of the program.
}