#include <iostream>
using namespace std;

int main() 
{
    int n;

    cout<<"Enter the number of rows: ";
    cin>>n;

    // Loop to iterate through each row
    for (int i = 1; i <= n; ++i) 
    {
        // Loop to print decreasing numbers from i to 1
        for (int j = i; j >= 1; --j) {
            cout<<j;
        }

        // Loop to print increasing numbers from 2 to i
        for (int k = 2; k <= i; ++k) 
        {
            cout<<k;
        }

        cout<<endl; // Move to the next line after each row
    }

    return 0;
}
