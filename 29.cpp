// Implement a program to reverse a number using a while loop.
#include<iostream>
using namespace std;
int main(){
    int n,reverse_number=0,reminder;
    cout<<"Enter the Number: "; 
    cin>>n;

    while(n!=0){
    reminder=n%10;
    reverse_number = reverse_number * 10 + reminder;
    n /= 10;
  }

  cout << "Reversed Number = " << reverse_number;
}

    