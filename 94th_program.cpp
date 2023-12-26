#include <iostream>
using namespace std;

int main() 
{
    int n;
    int currentNumber = 1;

//To enter the number rows we want
    cout<<"Enter the number of rows for the pattern: ";
    cin>>n;

    // Loop to iterate through each row
    for (int i = 1; i <= n; i++) 
    {
        // Loop to print numbers in each row
        for (int j = 1; j <= i; j++) {
            cout << currentNumber << " ";
            currentNumber++;
        }

        // Move to the next line for the next row
        cout<<endl;
    }

    return 0;
}
