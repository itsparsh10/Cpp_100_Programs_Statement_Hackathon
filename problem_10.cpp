// Implement a program to calculate the area of a triangle given its base and height.
#include <iostream>
using namespace std;
int main()
{
    float area, base, height;

    cout << "Enter base ";
    cin >> base;

    cout << "Enter height";
    cin >> height;

    area = 0.5 * base * height;

    cout << "Area of triangle = " << area << endl;
}