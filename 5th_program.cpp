#include <iostream>
using namespace std;

int main() 
{
    int number;

    // Ask the user to enter the number for which they want the multiplication table
    cout<<"Enter a number: ";
    cin>>number;

    // Print the multiplication table for the entered number
    cout<<"Multiplication Table for "<<number<< ":"<<endl;

    for (int i = 1; i <= 10; ++i) 
    {
        cout<<number<< " x " << i << " = " << (number * i) <<endl; //Arrangement of the input number and multplication symbol
    }

    return 0;
}

