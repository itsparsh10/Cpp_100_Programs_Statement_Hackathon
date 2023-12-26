#include <iostream>
//#include <cmath>
using namespace std;

// Function to check if a number is prime.
// Parameters: num - the number to check, divisor - the current divisor being tested (default is 2).
bool isPrime(int num, int divisor = 2) 
{
// If the number is 2, it is a prime number.
    if (num <= 2) {
        return (num == 2);
    }
//If the number is divisible evenly by the current divisor, it is not a prime number.
    if (num % divisor == 0) {
        return false;
    }

// If the square of the current divisor is greater than the number, it is a prime number.
    if (divisor * divisor > num) {
        return true;
    }

// Recursively call isPrime with the next divisor.
    return isPrime(num, divisor + 1);
}

// Main function
int main() 
{
    int number;

// Ask the user to enter a positive integer.
    cout<<"Enter a positive integer: ";
    cin>>number;

//If the input is not positive, display an error message and exit.
    if (number <= 0) {
        cout<<"Invalid input. Please enter a positive integer." <<endl;
        return 1;
    }

   // Call the isPrime function to check if the entered number is prime.

    if (isPrime(number)) {
        cout<<number << " is a prime number." <<endl;
    } else {
        cout<<number << " is not a prime number." <<endl;
    }

    return 0;
}
