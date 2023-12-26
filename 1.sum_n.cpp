#include<iostream>
using namespace std;

int findSum(int n) { // Declare the function with a parameter for n
    int sum = 0; // Initialize sum to 0
    for (int i = 1; i <= n; i++) { // Use i=1 and change the condition to i <= n
        sum = sum + i; // Add i to the sum in each iteration
    }
    return sum; // Return the sum after the loop
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    int result = findSum(n); // Call the findSum function with the user's input
    cout << "Sum of first  natural numbers is: " << result << endl;
  
    return 0;
}





