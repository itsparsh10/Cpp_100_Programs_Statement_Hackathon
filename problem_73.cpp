// Define a program that calculates the sum of digits of a number using recursion.

#include <iostream>
using namespace std;

int Sumofdigits(int inputnumber)
{
    if(inputnumber==0)
    {
        return 0;
    }
    else
    {
        return (inputnumber%10+Sumofdigits(inputnumber/10));
    }
}

int main()
{
    int inputnumber;
    cout<<"Enter number to find out the sum of digits";
    cin>>inputnumber;
    cout<<"Sum of "<<inputnumber<<" is "<<Sumofdigits(inputnumber);
}