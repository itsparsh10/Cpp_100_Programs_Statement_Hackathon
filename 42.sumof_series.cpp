#include <iostream>
using namespace std;

int main() {
    int N;
    double sum = 0.0;

    cout << "Enter the value of N: ";
    cin >> N; // Read the user's input and store it in the 'N' variable.

    for (int i = 1; i <= N; i++) {
        if (i % 2 == 1) {
            // Add the positive term for odd 'i'
            sum += 1.0 / i;
        } else {
            // Subtract the negative term for even 'i'
            sum -= 1.0 / i;
        }
    }

    cout << "Sum of the series is: " << sum << endl; // Display the calculated sum of the series.

    return 0; // Return 0 to indicate successful execution of the program.
}

