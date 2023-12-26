#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double a, b, c;
    
    // Prompt the user to enter coefficients
    cout<<"Enter coefficient a: ";
    cin>>a;
    cout<<"Enter coefficient b: ";
    cin>>b;
    cout<<"Enter coefficient c: ";
    cin>>c;

    // Calculate the discriminant
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) 
    {
        // Two real and distinct roots
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout<<"Root 1 = " << root1 <<endl;
        cout<<"Root 2 = " << root2 <<endl;
    } else if (discriminant == 0) 
    {
        // One real root (repeated)
        double root = -b / (2 * a);
        cout<<"Root = " << root <<endl;
    } else {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout<<"Root 1 = " << realPart << " + " << imaginaryPart << "i" <<endl;
        cout<<"Root 2 = " << realPart << " - " << imaginaryPart << "i" <<endl;
    }

    return 0;
}

       