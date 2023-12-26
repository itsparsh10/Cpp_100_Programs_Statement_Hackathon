// Reverse Number and Name are equal mean
// Create a program to check if a given string is a palindrome.
#include <iostream>
#include <string>

using namespace std;

// functin to check weather a given string is Palindrome or not
bool isPalindrome(const string &str) {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return str == reversed;
}

// main function
int main() {
    // input string from the user
    string input;

    cout << "Enter a string: ";
    cin >> input;

    // checking weather the function is palindrome or not by calling is function
    if (isPalindrome(input)) {
        cout << "\"" << input << "\" is a palindrome." <<endl;
    } else {
        cout << "\"" << input << "\" is not a palindrome." <<endl;
    }

    return 0;
}