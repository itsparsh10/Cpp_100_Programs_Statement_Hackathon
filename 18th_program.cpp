#include <iostream>
using namespace std;

int main() 
{
    int num;

    // Prompt the user to enter an integer
    cout<<"Enter an integer: ";
    cin>>num;

    // Check if the number is even or odd using the modulo operator (%)
    if (num % 2 == 0) 
    {
        cout << num << " is an even number." <<endl;
    } else {
        cout << num << " is an odd number." <<endl;
    }

    return 0;
}
