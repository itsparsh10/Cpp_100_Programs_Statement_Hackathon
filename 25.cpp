//Implement a program that determines the grade of a student based on their marks.
#include<iostream>
using namespace std;
int main() {

int Mark;
cout<<"Enter your Marks ";
cin>>Mark;

if (Mark>=90){
    cout<<"Grade : A" ;

}else if(Mark>=80){
    
    cout<<"Grade : B" ;
}else if(Mark>=50){
    
    cout<<"Grade : C" ;
}else if(Mark>=33){
    
    cout<<"Grade : D" ;
}else
    cout<<"Better Luck Next Time";


return 0;




    



    
}