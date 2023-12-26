// Write a program to print the multiplication table of a number using a for loop.
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<" enter your number : ";
    cin>>n;
    for(int i=1 ;i<=10;++i){
        cout<< n << "*" << i << "=" << n*i <<endl;
    }


    return 0;


}