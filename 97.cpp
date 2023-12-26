// Write a C++ program to display the following pattern:

//    1
//   232
//  34543
// 4567654
//  34543
//   232
//    1

#include <iostream>
using namespace std;
int main() {
    int n=4;
    cin >> n;
// using for loop for printing the above pattern
    for (int i = 1; i <= 4; i++) {
        // Print leading spaces
        for (int j = 1; j <= 4 - i; j++) {
            cout << " ";
        }

        // print increasing numbers
        for (int j = i; j <= 2 * i - 1; j++) {
            cout << j;
        }

        // print decreasing numbers (excluding the last number)
        for (int j = 2 * i - 2; j >= i; j--) {
            cout << j;
        }

        // endl help to move to the next line
        cout << endl;
    }

    for (int i = 4 - 1; i >= 1; i--) {
        // print leading spaces
        for (int j = 1; j <= 4 - i; j++) {
            cout << " ";
        }

        // print increasing numbers
        for (int j = i; j <= 2 * i - 1; j++) {
            cout << j;
        }

        // print decreasing numbers (excluding the last number)
        for (int j = 2 * i - 2; j >= i; j--) {
            cout << j;
        }

        // Move to the next line
        cout<<endl;
    }

    return 0;
}
