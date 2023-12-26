// Implement a program to find the largest and smallest elements in an array.

#include <iostream>
using namespace std;
int main()
{
    int array[100],n,i,max,min;
    cout<<"Enter array size: "<<endl;
    cin>>n;
    cout<<"Enter array elements: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }

    max=array[0];
    for(i=0;i<n;i++)
    {
        if(max<array[i])
        {
            max=array[i];
        }
    }

    min=array[0];
    for(i=0;i<n;i++)
    {
        if(min>array[i])
        {
            min=array[i];
        }
    }
    cout<<"Largest element: "<<max<<endl;
    cout<<"Smallest element "<<min<<endl;
}