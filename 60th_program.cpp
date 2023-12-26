#include <iostream>

using namespace std;

// Function to compute the intersection of two arrays.
// Parameters:
//   - arr1: First array of integers.
//   - arr2: Second array of integers.
//   - size1: Number of elements in the first array.
//   - size2: Number of elements in the second array.
void computeIntersection(int arr1[], int arr2[], int size1, int size2) {
    cout << "Intersection of the two arrays:" << endl;
    
    // Iterate through the elements of the first array.
    for (int i = 0; i < size1; ++i) 
    {
        // For each element in the first array, check if it exists in the second array.
        for (int j = 0; j < size2; ++j) 
        {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " "; // Print the common element in the intersection.
                break; // Break to avoid duplicate elements in the intersection.
            }
        }
    }
    cout<<endl;
}

int main() 
{
    int n1, n2;

    cout<<"Enter the number of elements in the first array: ";
    cin>>n1;

    cout<<"Enter the elements of the first array:" <<endl;
    int nums1[n1];
    for (int i = 0; i < n1; ++i) {
        cin>>nums1[i];
    }

    cout<<"Enter the number of elements in the second array: ";
    cin>>n2;

    cout<<"Enter the elements of the second array:" <<endl;
    int nums2[n2];
    for (int i = 0; i < n2; ++i) {
        cin >> nums2[i];
    }

    // Call the function to compute the intersection.
    computeIntersection(nums1, nums2, n1, n2);

    return 0;
}

