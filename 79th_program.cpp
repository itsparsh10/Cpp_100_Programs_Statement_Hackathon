#include <iostream>
#include <string>
using namespace std;

// Function to find the Longest Common Subsequence (LCS) of two strings.

string findLCS(const string& str1, const string& str2, int m, int n) 

{ // If either of the strings is empty, there is no common subsequence, so return an empty string.
    
    if (m == 0 || n == 0) {
        return "";
    }
    // If the last characters of both strings match, they are part of the LCS.

    if (str1[m - 1] == str2[n - 1]) 
    { 
        // Recursively find the LCS without these last characters and add the common character.
        return findLCS(str1, str2, m - 1, n - 1) + str1[m - 1];
    } else {
         // If the last characters don't match, explore two possibilities:
         // 1. Exclude the last character of str1 and find the LCS in the remaining part of str1 and all of str2.
        
        string lcs1 = findLCS(str1, str2, m - 1, n);

         // 2. Exclude the last character of str2 and find the LCS in the remaining part of str2 and all of str1.
       
        string lcs2 = findLCS(str1, str2, m, n - 1);

        // Return the longer LCS between the two possibilities.
        
        return (lcs1.length() > lcs2.length()) ? lcs1 : lcs2;
    }
}

int main() 
{
    string str1, str2;

    cout<<"Enter the first string: ";
    cin>>str1;

    cout<<"Enter the second string: ";
    cin>>str2;

    int m = str1.length();
    int n = str2.length();

// Call the findLCS function to find the LCS of the two input strings.
    string lcs = findLCS(str1, str2, m, n);

// Display the Longest Common Subsequence.
    cout<<"Longest Common Subsequence: " << lcs <<endl;

    return 0;
}
