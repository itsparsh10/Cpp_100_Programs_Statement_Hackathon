// Calculate the sum of all even numbers between 1 and N.

#include <iostream>
using namespace std;
int main()
{
    int n,sum=0;

    cout<<"Print sum of even numbers till: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        // condition to check th number is even or not.
        if(i%2==0)  
        {
            cout<<i<<endl;
            sum=sum+i;
        }
    }
    cout<<"Sum of even number from 1 to "<<n<<" is: "<<sum<<endl;
}