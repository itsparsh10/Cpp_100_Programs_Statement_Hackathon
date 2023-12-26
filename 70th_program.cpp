#include <iostream>
using namespace std;

// Function to solve the Tower of Hanoi puzzle.
// Parameters:
//   - n: Number of disks to move.
//   - sourceRod: The rod from which to move the disks.
//   - auxiliaryRod: The auxiliary rod used for temporary storage.
//   - destinationRod: The rod to which to move the disks.

void towerOfHanoi(int n, char sourceRod, char auxiliaryRod, char destinationRod) {

     // If there's only one disk to move, move it from the sourceRod to the destinationRod directly.
    if (n == 1) {
        cout<<"Move disk 1 from " << sourceRod << " to " << destinationRod <<endl;
        return;
    }
    // Recursive Case:
    // For more than one disk, follow these steps:
    
    // Step 1: Move (n-1) disks from the sourceRod to the auxiliaryRod using the destinationRod as temporary storage.

    towerOfHanoi(n - 1, sourceRod, destinationRod, auxiliaryRod);

    // Step 2: Move the nth disk from the sourceRod to the destinationRod and print the step.
    cout<<"Move disk " << n << " from " << sourceRod << " to " << destinationRod <<endl;

    // Step 3: Recursively move (n-1) disks from the auxiliaryRod to the destinationRod using the sourceRod as temporary storage.
    towerOfHanoi(n - 1, auxiliaryRod, sourceRod, destinationRod);
}
// Main function
int main() 
{
    int numDisks;

// Ask the user to enter the number of disks.
    cout<<"Enter the number of disks: ";
    cin>>numDisks;

// Display the Tower of Hanoi steps by calling the towerOfHanoi function.
    cout<<"Tower of Hanoi steps:" <<endl;
    towerOfHanoi(numDisks, 'A', 'B', 'C');

    return 0;
}
