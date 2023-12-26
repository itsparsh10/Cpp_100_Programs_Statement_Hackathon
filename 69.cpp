// Recursive function to find the nth Fibonacci number
#include <iostream>
using namespace std;

int fibonacci(int n){
    if (n <= 1){
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;

    cout << "Enter the value ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a Positive integer " << endl;
    } else {
        int result = fibonacci(n);
        cout << "The " << n << "the Fibonacci number is: " << result << endl;
    }

    return 0;
}
