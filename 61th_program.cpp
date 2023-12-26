#include <iostream>
using namespace std;

// Function to find the majority element in the array.
// Parameters:
//   - nums: The array of integers.
//   - n: The number of elements in the array.
int findMajorityElement(int nums[], int n) 
{
    
    int majorityElement = nums[0]; // Assume the first element is the majority element.
    int count = 1; // Initialize the count of the assumed majority element.

    // Traverse the array starting from the second element.
    for (int i = 1; i < n; i++) {
       
        if (nums[i] == majorityElement) {
            count++; // Increment the count if the current element matches the assumed majority element.
        } else {
            count--; // Decrement the count if the current element is different.
        }

        // If the count becomes zero, update the assumed majority element to the current element.
        if (count == 0) {
            majorityElement = nums[i];
            count = 1;
        }
    }

    return majorityElement; // Return the assumed majority element.
}

int main() 
{
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    int nums[n];

    cout<<"Enter the elements of the array:" <<endl;
    for (int i = 0; i < n; ++i) 
    {
        cin>>nums[i];
    }

    // Call the function to find the majority element.
    int majorityElement = findMajorityElement(nums, n);

    // Display the result.
    cout<<"The majority element is: " << majorityElement <<endl;

    return 0;
}


   