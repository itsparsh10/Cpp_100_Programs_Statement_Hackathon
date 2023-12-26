// Write a program to generate all possible permutations of a string.
#include <iostream>
#include <string>
using namespace std;

// function to swap 2 chars
void swap(char &a, char &b)
{
    char temp = a;
    a = b;
    b = temp;
}

// function to generate permunations
void generatePermutations(string str, int left, int right)
{
    if (left == right)
    {
        cout << str << endl;
    }
    else
    {
        for (int i = left; i <= right; ++i)
        {

            swap(str[left], str[i]);

            generatePermutations(str, left + 1, right);

            swap(str[left], str[i]);
        }
    }
}

int main()
{
    // input a string from user
    string input;

    cout << "Enter a string: ";
    cin >> input;

    int n = input.length();

    // calling function to generate the permutations of given string
    generatePermutations(input, 0, n - 1);

    return 0;
}