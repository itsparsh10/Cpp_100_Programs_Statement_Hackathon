#include<iostream>
using namespace std;

// Function to calculate the power of a number
int calculatePower(int base, int power) {
  if (power == 0) {
    return 1; // Any number raised to the power of 0 is 1
  } else if (power > 0) {
    return base * calculatePower(base, power - 1); // Positive power
  } else {
    // Handle negative powers here if needed
    return 1 / (base * calculatePower(base, -power - 1)); // Negative power
  }
}

int main() {
  int base, power;

  // Input from the user
  cout << "Enter base of num: ";
  cin >> base;
  cout << "Enter power of num: ";
  cin >> power;

  // Calculate the result using the calculatePower function
  int result = calculatePower(base, power);

  // Display the result
  cout << "Result: " << result << endl;

  return 0;
}





