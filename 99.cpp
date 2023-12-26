// write a C++ program to display the following pattern:
// EEEEE
// DDDD
// CCC
// BB
// A"


#include <iostream>

using namespace std;

int main() {
  // Declare a variable to store the current word char
  char word = 'E';
  // using for loop for print the char
  for (int i = 5; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
      // giving command for print the
      cout << word;
    }

    cout << endl;
    // use word-- because if we not use that that they not be able to print decreasing char

    word--;
  }

  return 0;
}

