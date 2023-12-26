//pogram no 03
//to calculaate the factorial of a number using recursion

#include<iostream>
using namespace std;

int factorial(int n);

int factorial(int n) {
  if(n > 1)
    return n * factorial(n - 1);
    //this statement will be used to find the factorial
  else
    return 1;
    //will return the value
}

int main() {

  int n;

  cout << "Enter a positive integer: ";
  cin >> n;

  cout << "Factorial of " << n << " = " << factorial(n);

  return 0;
}

