#include <iostream>
using namespace std;

int main() 
{
    int n;

    cout<<"Enter the number of rows for the pattern: ";
    cin>>n;

    // Loop to iterate through each row
    for (int i = 1; i <= n; i++) 
    {
        // Loop to print numbers in each row
        for (int j = 1; j <= i; j++) 
        {
            // Print 1 for odd positions and 0 for even positions
            cout<<(j % 2 == 1 ? '1' : '0');
        }

        // Move to the next line for the next row
        cout<<endl;
    }

    return 0;
}
