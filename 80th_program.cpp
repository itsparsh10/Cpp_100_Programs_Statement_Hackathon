#include <iostream>
using namespace std;

// Function to count the number of ways to climb stairs using given step sizes.
int countWays(int* steps, int numSteps, int n) 
{ //If the number of stairs to climb is negative, there are no ways to climb.
   
    if (n < 0) 
    {
        return 0;
    } 
   // If the number of stairs to climb is 0, there is one way (no steps needed).
    else if (n == 0) 
    {
        return 1;
    }

    int ways = 0;
    
// Iterate through different step sizes and calculate ways recursively.
    for (int i = 0; i < numSteps; ++i) 
    { // Recursive call to countWays for each possible step size.
        ways = ways + countWays(steps, numSteps, n - steps[i]);
    }

    return ways;
}

// main function
int main() 
{ // Input the number of stairs, the number of different step sizes, and the step sizes from the user.
    
    int num;
    cout<<"Enter the number of stairs: ";
    cin>>num;

    int numSteps;
    cout<<"Enter the number of different step sizes: ";
    cin>>numSteps;

    int steps[numSteps];

    cout<<"Enter the step sizes " <<endl;
    for (int i = 0; i < numSteps; ++i) {
        cout<<"Enter " << i+1 << "th step size: ";
        cin>>steps[i];
    }

    // Display the number of ways to climb the stairs by calling the countWays function.
    cout<<"Number of ways to climb the stairs: " << countWays(steps, numSteps, num) << endl;

    return 0;
}

