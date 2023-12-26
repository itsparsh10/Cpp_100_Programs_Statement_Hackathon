// "Create a C++ program to print the following pattern:


//     *
//    ***
//   *****
//  *******
// *********"

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter rows";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int k = n - i; k > 0; k--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}