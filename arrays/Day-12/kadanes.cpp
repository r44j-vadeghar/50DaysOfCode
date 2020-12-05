// Kadanes algorithm
// C++ code to find largest sum contiguous sub array
#include <iostream>
#include<climits>
using namespace std;

// Functions used in this code
int maxSubarray(int *array, int size);

// Driver function
int main(void) {
    // Specifying number of test cases
    int testcases;
    cout << "Enter number of testcases: ";
    cin >> testcases;

    for (int i = 0; i < testcases; i++)
    {
        // Specifying size of array
        int size;
        cout << "\nEnter the size of the array: ";
        cin >> size;

        // Initialize the array elements
        int array[size];
        cout << "\nEnter the array elements: ";
        for (int i = 0; i < size; i++)
        {
            cin >> array[i];
        }
        
        // print output onto the screen
        cout << maxSubarray(array, size);
    } 
}

// function to find largest sum contiguous sub array
int maxSubarray(int *array, int size) {
    int max = INT_MIN, max_ending = 0;
    for (int i = 0; i < size; i++) {
        max_ending = max_ending + array[i];
        if (max < max_ending) {
            max = max_ending;
        }
        if (max_ending < 0) {
            max_ending = 0;
        }
    }
    return max;
}