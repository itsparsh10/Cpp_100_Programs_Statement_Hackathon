// "Write a C++ program to display the following pattern:

// A
// B C
// D E F
// G H I J"

#include <iostream>

using namespace std;

#include <iostream>

using namespace std;

int main()
{
    char alphabet = 'A';

    for (int i = 1; i <= 4; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << alphabet++ << " ";
        }
        cout << endl;
    }

    return 0;
}
