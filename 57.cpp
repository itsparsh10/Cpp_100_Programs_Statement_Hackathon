// Write a C++ program to remove duplicate elements from an array.
#include<iostream>
using namespace std;
int main ()
{
    int j, n,k = 0;
    cout << "Enter size of array : ";
    cin >> n;
    //creating two arrays, one for storing user values and one for storing the previous array without repeated elements
   int A[n], B[n];
    //entering elements in the array
    cout << "Enter elements of array : ";
    for (int i = 0; i < n; i++)
        cin >> A[i];    
    //checks if the elements in first array are also present in the second array
    for (int i = 0; i < n; i++)
    {
        for ( j = 0; j < k; j++)
        {
            if (A[i] == B[j])
                break;
        }
        //if the element is not present in second array, it will add the element from the first array to the second array
        //if the element is present, it will skip the element
        if (j == k)
        {
            B[k] = A[i];
            k++;
        }
    }
    //printing the second array
    cout << "Repeated elements after deletion : ";
    for (int i = 0; i < k; i++)
        cout << B[i] << " ";
    return 0;
}