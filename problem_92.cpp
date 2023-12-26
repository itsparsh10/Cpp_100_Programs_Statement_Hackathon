// "Create a C++ program to print the following pattern:

// *****
// *   *
// *   *
// *   *
// *****"

#include <iostream>

int main()
{
    int rows = 5;
    int cols = 5;
    using namespace std;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == cols)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
