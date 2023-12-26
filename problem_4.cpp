// Write a C++ program to display the Fibonacci sequence up to N terms.

#include <iostream>
using namespace std;
int main()
{
    int n, first = 0, second = 1, next;

    cout << "Enter the number upto which you want to print Fibonacci series : ";
    cin >> n;

    cout << "Fibonacci series " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << first << endl;
        next = first + second;
        first = second;
        second = next;
    }
}