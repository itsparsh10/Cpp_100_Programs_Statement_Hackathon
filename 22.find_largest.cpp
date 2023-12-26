#include <iostream>
using namespace std;

int main() {

    int n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    // check if n1 is greater than n2
    if (n1 >= n2) {

        // if n1 is also greater than n3,
        // then n1 is the largest number
        if (n1 >= n3)
            cout << "Largest number: " << n1;

        // but if n1 is less than n3
        // but n1 is greater than n2
        // then n3 is the largest number
        else
            cout << "Largest number: " << n3;
    }

     // else, n2 is greater than n1
    else {

        // if n2 is also greater than n3,
        // then n2 is the largest number
        if (n2 >= n3)
            cout << "Largest number: " << n2;

        // but if n2 is less than n3
        // but n2 is greater than n1
        // then n3 is the largest number
        else
            cout << "Largest number: " << n3;
    }

    return 0;
}