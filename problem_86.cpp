// "Write a program to display the following pattern:

// 1234
// 123
// 12
// 1"

#include <iostream>

using namespace std;

int main()
{
    int n = 4; // Number of rows

    for (int i = n; i >= 1; --i)
    {

        // Print numbers
        for (int j = 1; j <= i; ++j)
        {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}
