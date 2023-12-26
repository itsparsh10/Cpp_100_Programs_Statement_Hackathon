#include <iostream>
using namespace std;

// Function to find the Highest Common Factor (HCF) of two numbers using Euclidean Algorithm.
int findHCF(int a, int b) {

    //When b becomes 0, the HCF is the non-zero remainder (a).
    if (b == 0) {
        return a; // The HCF is the non-zero remainder (a) when b becomes 0.
    } else {
        // Recursive call: Swap a and b, and continue with b as the new divisor.
        return findHCF(b, a % b);
    }
}
//main function
int main() 
{
    int num1, num2;

// Ask the user to enter the first number.
    cout<<"Enter the first number: ";
    cin>>num1;

// Ask the user to enter the second number.
    cout<<"Enter the second number: ";
    cin>>num2;

// Calculate the HCF of the two numbers using the findHCF function.
    int hcf = findHCF(num1, num2);

 // Display the calculated HCF.
    cout<<"The HCF of " << num1 << " and " << num2 << " is " << hcf <<endl;

    return 0;
}
