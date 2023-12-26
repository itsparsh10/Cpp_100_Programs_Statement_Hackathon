#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int number, originalNumber, remainder, result = 0;
    int n = 0;

    cout<<"Enter an integer: ";
    cin>>number;

    originalNumber = number;

    // Count the number of digits in the input number
    while (originalNumber != 0) {
        originalNumber = originalNumber / 10;
        ++n;
    }

    originalNumber = number; // Reset originalNumber to the input value

    // Calculate Armstrong sum
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result = result + pow(remainder, n);
        originalNumber = originalNumber / 10;
    }

    // Check if the number is an Armstrong number
    if (result == number) {
        cout<<number<<" is an Armstrong number." <<endl;
    } else {
        cout<<number<<" is not an Armstrong number." <<endl;
    }

    return 0;
}
