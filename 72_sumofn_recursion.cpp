#include <iostream>
using namespace std;

int _sum(int n) {
    if (n == 0)
        return 0;
    else
        return n + _sum(n - 1);
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    int sum = _sum(n);
    cout << "Sum of the first " << n << " natural numbers is: " << sum << endl;

    return 0;
}