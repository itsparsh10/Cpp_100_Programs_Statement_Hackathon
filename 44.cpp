// Calculate the sum of series 1/1! + 2/2! + 3/3! + ... + N/N! using nested loops.
#include<iostream>
using namespace std;
int main() {
    int n;
    double sum=0.0;
    double factorial=1.0;
    cout<<"enter the value : ";
    cin>>n;

    for (int i = 1.0; i<=n;i++)
    {
        factorial*=i;
        sum+=i/factorial;
    }
      cout<< "the sum of the series 1/1! + 2/2! + 3/3! + ... + N/N is;"<<sum<<endl;

      return 0;
}

// factorial *= i;
//     // sum += i / factorial understand very well