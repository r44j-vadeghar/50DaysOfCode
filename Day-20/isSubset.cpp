// C++ program to find whether an array is subset of another array.
#include <iostream>
#include <algorithm>
using namespace std;

// functions used in this code
void readArray(int *array, int size);
bool isSubset(int *array1, int size1, int *array2, int size2);
bool isSubset2(int *array1, int size1, int *array2, int size2);

// Driver Code
int main(void) {
    // Specifying number of testcases
    int testcases;
    cout << "Enter number of testcases: ";
    cin >> testcases;

    // traversing through each testcase
    for(int i = 0; i < testcases; i++) {
        // Specifying sizes of the arrays
        int size1, size2;
        cout << "Enter sizes of the both arrays: ";
        cin >> size1 >> size2;

        // Specifying the array1 and it's elements
        int array1[size1], array2[size2];
        cout << "Enter elements of array1: ";
        readArray(array1, size1);

        // Specifying the array2 and it's elements
        cout << "Enter elements of array2: ";
        readArray(array2, size2);

        // if subset... displys yes on screen, else displays no
        if (isSubset2(array1, size1, array2, size2)) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }
}

// Function to read the array elements
void readArray(int *array, int size) {
    for(int i = 0; i < size; i++) {
        cin >> array[i];
    }
}

// Method 1 (Time Complexity - O(n square))
bool isSubset(int *array1, int size1, int *array2, int size2) {
    int count = 0;
    
    // iterate through every element of array2 
    for(int i = 0; i < size2; i++) {

        // iterate through every element of array1
        for(int j = 0; j < size1; j++) {

            // if array2 elements exits in array1, update count variable
            if(array2[i] == array1[j]) {
                count++;
                break;
            }
        }
    }

    //If count is equal to size of array2, then it is the subset of first array
    return count == size2;
}

// Method 2 (Time Complexity - O(n log n))
bool isSubset2(int *array1, int size1, int *array2, int size2) {
    // Sort both the arrays
    sort(array1, array1+size1);
    sort(array2, array2+size2);
    
    int i = 0, j = 0;
    // Iterate till they do not exceed their size
    while(i < size1 && j < size2) {

        // If both are equal, then move both of them forward 
        if(array1[i] == array2[j]) {
            i++;
            j++;
        }

        // If the element is smaller then, move aheaad in the first array
        if(array1[i] < array2[j]) {
            i++;
        }

        // If we donot have a element smaller or equal to the second array then break
        if(array1[i] > array2[j]) {
            return false;
        }
    }
    //if second array end is reached, then it is the subset of first array
    return j == size2;
}
