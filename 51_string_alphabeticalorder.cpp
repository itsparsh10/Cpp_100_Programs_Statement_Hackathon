//program number 51
//array of strings to display in alphabetical order

#include <iostream>
using namespace std;


//we made a custom function named comparator which compares two characters
bool comparator(string a,string b)
{
    return a<b;
}
int main()
{
    int n;

    cout<<"Enter the size of the array";
    cin>>n;

    string arr[n];

    //We used a for loop to input the value of the array from the user

    for (int i = 0;i<=n;i++)
    {
     cout<<"Enter the elements";
     cin>>arr[i];
    }
    sort(arr,arr+n,comparator);
       for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}