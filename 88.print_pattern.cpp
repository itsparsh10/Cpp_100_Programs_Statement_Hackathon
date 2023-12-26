
#include<iostream>
using namespace std;

int main() {
    int n = 4; // Change this value to control the number of rows

    for (int i = 1; i <= n; i++) {
        // Print spaces before the numbers
        // for (int j = 1; j <= n-i; j++) {
        //     cout <<endl;
        // }

        // Print numbers in ascending order
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // Print numbers in descending order
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}