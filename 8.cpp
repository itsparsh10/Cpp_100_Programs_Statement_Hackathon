// Write a program that checks if a number is a perfect number.
#include<iostream>
using namespace std;
int main() {

    double a,b,c,discriminant,x1,x2;
    cout<<"enter the number"<<endl;
    cin>>a>>b>>c;
    discriminant= b * b - 4 * a * c;

    if(discriminant>0)
    {cout<<"the quadratic equation"<<endl;
     cout<<"x1= "<< (-b+sqrt(discriminant)) / (2*a)<<endl;
     cout<<"x2= "<< (-b-sqrt(discriminant))/ (2*a)<<endl;
    }else if(discriminant==0)
    {
        cout<<"the quadratic equation is"<<endl;
        cout<<"x="<< -b / (2*a)<<endl;
        
        

    }else
    {
        cout<<"ohh it is two complex roots ";

    }

    return 0;

}