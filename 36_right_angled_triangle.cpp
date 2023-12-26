//program no 36 

//printing right angled triangle using nested loops

#include <iostream>

 using namespace std;

 int main(){
    int n, i, j;
    //variable to be used in the code
    
    cout<< "Enter the number of lines for the pyramid:";
    cin>> n;
    //to take the input from the user

    for(i=0; i<n; i++){
        
        for (j=0; j<=i; j++){
            cout<<"*";    //statement to print * till the condition is true
        }
        cout<<"\n";
    }
   return 0;

 }