
#include<iostream>
using namespace std;

int main()
{
    char alphabet; // Declare a character variable to store the input alphabet.
    cout << "enter a alphabet:"; // Prompt the user to enter an alphabet.
    cin >> alphabet; // Read the input alphabet from the user.

    // Check if the input alphabet is a vowel (a, e, i, o, or u).
    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u')
    {
        cout << "this is vowel."; // If it's a vowel, display a message.
    }
    else
    {
        cout << "this is consonant"; // If it's not a vowel, display a different message.
    }

    return 0;
}
