// "Create a C++ program to print the following pattern:

//     1
//    121
//   12321
//  1234321
// 123454321"

#include <iostream>

using namespace std;

int main() {
    int n = 5; // Number of rows

    for (int i = 1; i <= n; ++i) {
        // Print leading spaces
        for (int space = 1; space <= n - i; ++space) {
            cout << " ";
        }

        // Print increasing numbers
        for (int j = 1; j <= i; ++j) {
            cout << j;
        }

        // Print decreasing numbers
        for (int k = i - 1; k >= 1; --k) {
            cout << k;
        }

        cout << endl;
    }

    return 0;
}
