// Write a C++ program to display the following pattern:
// 54321
// 5432
// 543
// 54
// 5

#include<iostream>
using namespace std;
int main() {
   // using for loop for print the number 
    for (int i=1; i<=5; i++){
      for (int j=5; j>=i; j--){
        // in cout we print j because j will help print 54321 in dec way with help of i
        cout << j;
        
    }
    cout<<endl;
    
    }
    return 0;

}