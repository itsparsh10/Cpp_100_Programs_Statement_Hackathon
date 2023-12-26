#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    if (n <= 1) {
        cout << "This is not prime"; // 0 and 1 are not prime
    } else {
        bool isPrime = true;
        for (int i = 2; i * i <= n; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << "This is prime"; // n is prime
        } else {
            cout << "This is not prime"; // n is not prime
        }
    }

    return 0;
}
