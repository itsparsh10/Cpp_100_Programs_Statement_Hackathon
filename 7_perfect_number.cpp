//program no 07
//to check if a number is perfect number
//a perfect number is a positive integer that is equal to the sum of its positive divisors 


#include <iostream> 
using namespace std; 

int main(){
    int n,i=1,sum=0;
    //declared some variables to be used further
    cout << "Enter a number: ";
    cin >> n;
    //to take the input.
    
       while(i<n){
       if(n%i==0)
       sum=sum+i;
       i++; 
}
 
if(sum==n)
    cout << i << " is a perfect number\n"; 
else
    cout << i << " is not a perfect number\n";
    system("pause"); 

return 0;
}