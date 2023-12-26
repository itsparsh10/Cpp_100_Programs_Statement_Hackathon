#include <iostream>
using namespace std;

int main() 
{
    char operation;
    double number1, number2, result;

    // Display a menu for choosing the operation
    cout<<"SIMPLE CALCULATOR MENU:" <<endl;
    cout<<"1. ADDITION (+)" <<endl;
    cout<<"2. SUBTRACTION (-)" <<endl;
    cout<<"3. MULTIPLICATION (*)" <<endl;
    cout<<"4. DIVISION (/)" <<endl;
    cout<<"Enter your choice (1-4): ";
    cin>>operation;

    cout<<"Enter two numbers: ";
    cin>>number1>>number2;

    // Perform the selected operation using a switch case
    switch (operation) 
    {
        case '1':
            result = number1 + number2;
            cout<<"RESULT: " << number1 << " + " << number2 << " = " << result <<endl;
            break;

        case '2':
            result = number1 - number2;
            cout<<"RESULT: " << number1 << " - " << number2 << " = " << result <<endl;
            break;

        case '3':
            result = number1 * number2;
            cout<<"RESULT: " << number1 << " * " << number2 << " = " << result <<endl;
            break;

        case '4':
            if (number2 != 0) {
                result = number1 / number2;
                cout<<"RESULT: " << number1 << " / " << number2 << " = " << result <<endl;
            } else {
                cout<<"Error: Division by zero is not allowed." <<endl; // Handle division by zero
            }
            break;

        default:
            cout<<"Invalid choice. Please select a valid operation (1-4)." <<endl;
    }

    return 0;
}
