//program to print revrse of an array

#include <iostream>  
using namespace std;  
  
int main ()  
{  
    int array[100];
    int n; 
    int t; 
    int i, j;  // for loops


    cout << " Enter the size of the array: ";  
    cin >> n;  
      
    // use for loop to enter the numbers   
    for (i = 0; i < n; i++)  
    {  
        cout << " Enter the element " << i+1 << ": ";  
        cin >> array[i];  
    }  
      
      
    for ( i = 0, j = n - 1; i < n/2; i++, j--)  
    {     
        t = array[i];  
     array[i] = array[j];  
     array[j] = t;  
    }  
    cout << "\n Reverse all elements of the array: " << endl;  
    // use for loop to print the reverse array  
    for ( i = 0; i < n; i++)  
    {  
        cout << array[i] << " ";  
    }  
    return 0;  
}