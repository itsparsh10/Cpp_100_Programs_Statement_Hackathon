#include <iostream>
using namespace std;

// Function to convert Celsius to Fahrenheit
double CelsiustoFahrenheit(double celsius) 
{
    return (celsius * 9/5) + 32;
}

// Function to convert Fahrenheit to Celsius
double FahrenheittoCelsius(double fahrenheit) 
{
    return (fahrenheit - 32) * 5/9;
}

int main() 
{
    int choice;
    double temperature;

    // Display the temperature conversion menu
    cout<<"TEMPERATURE CONVERSION MENU:" <<endl;
    cout<<"1. Celsius to Fahrenheit" <<endl;
    cout<<"2. Fahrenheit to Celsius" <<endl;
    cout<<"Enter your choice (1 or 2): ";
    cin>>choice;

    if (choice == 1) 
    {
        cout<<"Enter temperature in Celsius: ";
        cin>>temperature;
        double Fahrenheit = CelsiustoFahrenheit(temperature);
        cout<<"Equivalent temperature in Fahrenheit: " << Fahrenheit << " °F" <<endl;
    } else if (choice == 2) 
    {
        cout<<"Enter temperature in Fahrenheit: ";
        cin>>temperature;
        double Celsius = FahrenheittoCelsius(temperature);
        cout<<"Equivalent temperature in Celsius: " << Celsius << " °C" <<endl;
    } else 
    {
        cout<<"Invalid choice. Please select 1 or 2." <<endl;
    }

    return 0;
}
