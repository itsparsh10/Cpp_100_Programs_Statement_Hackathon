// Write a C++ program to find the sum of digits of a number until it becomes a single-digit number.

#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    int result = number % 9 ? : 9;

    cout << "The final sum of digits is: " << result << endl;

    return 0;
}