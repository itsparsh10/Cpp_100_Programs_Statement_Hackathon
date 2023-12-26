// Write a program to print all natural numbers from 1 to N using a while loop.

#include <iostream>
using namespace std;
int main()
{
    int n, i;
    i = 1;

    cout << "Enter number upto which you want to print Natural number ";
    cin >> n;

    while (i <= n)
    {
        cout << i << endl;
        i++;
    }
}