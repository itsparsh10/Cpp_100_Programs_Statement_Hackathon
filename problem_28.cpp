// Create a program to find the sum of even numbers from 1 to N using a while loop.

#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, i=1;

    cout << "Print sum of even numbers till: ";
    cin >> n;

    while (i <= n)
    {
        // condition to check whether the number is even or not.
        if (i % 2 == 0)
        {
           sum=sum+i;
           cout<<i<<endl;
        }
        i++;
    }
    cout << "Sum of even number from 1 to " << n << " is: " << sum << endl;
}
