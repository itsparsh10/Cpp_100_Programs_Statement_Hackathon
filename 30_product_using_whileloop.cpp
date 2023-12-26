#include<iostream>

using namespace std;
int main()
{
   int num, rem, prod=1;
   //variable to be used further in the program
   //rem = remainder
   //prod = product
   //num = number

   cout<<"Enter a Number: ";
   cin>>num;
   //to take the input from the user

   while(num>0)
   //while the number is greater than 0
   {
      rem = num%10;
      prod = prod*rem;
      num = num/10;
   }
   cout<<"\nProduct of all digits of given number is: "<<prod;
   cout<<endl;
   return 0;
}