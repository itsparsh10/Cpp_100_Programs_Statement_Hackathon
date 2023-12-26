//sum of natural numbers upto n
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    //we initialised and declared two variables to be used in the program

    cout << "Enter a positive integer: ";
    cin >> n;
    //to take the input from the user

    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    //the += operator will add the number and assign the value to the left and continue the operation

    cout << "Sum = " << sum;
    //print statement for the final sum
    return 0;
}