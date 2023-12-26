#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string inputString, reversedString ;

    
    cout<<"Enter a string: ";
    cin>>inputString;

    // Calculate the length of the input string
    int length = inputString.length();

    // For reversing the string
    for (int i = length - 1; i >= 0; --i) 
    {
        reversedString = reversedString + inputString[i];
    }

    // Output the reversed string
    cout<<"Reversed string: " << reversedString <<endl;

    return 0;
}
