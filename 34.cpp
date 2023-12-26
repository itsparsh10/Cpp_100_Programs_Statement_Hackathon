// Calculate the sum of digits of a number using a do-while loop.
#include<iostream>
using namespace std;
int main() {
    
    int number;
    int sum = 0 ;
    cout<<" enter the value :";
    cin>>number;

    do{
        sum+=number%10;
        number /=10;
        

    }while(number>0);


    cout<<" The sum of digits of the number is " << sum  << endl;


    return 0;
        

    

    

}