// "Write a C++ program to display the following pattern:

// E
// DE
// CDE
// BCDE
// ABCDE"

#include <iostream>
using namespace std;
int main()
{
    int n=5;
    char currentChar;
    

    // cout << "Enter the number of rows: ";
    // cin >> n;

    for (int i = 1; i <= n; i++)
    {
        currentChar = 'A' + n - i;

        for (int j = 1; j <= i; j++)
        {
            cout << currentChar;
            currentChar++;
        }

        cout << endl;
    }

    return 0;
}
