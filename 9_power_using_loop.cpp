//program no 09 
//to calculate the power of the number

#include <iostream>
 
using namespace std;
  
int main(){
    int base, exp, i, result = 1;
    //variables to be used in the code below
     
 cout << "Enter base and exponent\n";
    cin >> base >> exp;
    //to take input frmom the user
     
    // Calculate base^exponent by repetitively multiplying base
    for(i = 0; i < exp; i++){
        result = result * base;
        //the above statement will multiply the result and the base and store the product in the result variable
    }
      
    cout << base << "^" << exp << " = " << result;
     
    return 0;
}