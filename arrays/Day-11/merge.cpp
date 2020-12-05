// C++ function to merge two sorted arrays without using extra space
#include <iostream>
#include <algorithm>
using namespace std;

// Functions used in this code
void readArray(int *arr, int size);
void printArray(int *arr, int size);

class Solution {
    public:
    // Specifying public function merge using class
    // this function is used to merge 2 sorted arrays
    void merge(int *arr1, int *arr2, int size1, int size2) {
        int i = 0, j = 0;
        while (i < size1) {
            if (arr1[i] >= arr2[j]) {
                swap(arr1[i], arr2[j]);
                sort(arr2, arr2 + size2);
                i++;
            }
            else {
                i++;
            }
        }
    }
};

// Driver function
int main(void) {
    // Specifying testcases
    int testcases;
    cout << "Enter number of testcases: ";
    cin >> testcases;

    for (int i = 0; i < testcases; i++)
    {
        // Specifying sizes of two arrays
        int size1, size2;
        cout << "\nEnter size of two Arrays: ";
        cin >> size1 >> size2;

        //Create 2 arrays with given size
        int arr1[size1], arr2[size2];

        //Initialize the arr1 elements
        cout << "\nEnter elements of Array 1: ";
        readArray(arr1, size1);

        //Initialize the arr2 elements
        cout << "\nEnter elements of Array 2: ";
        readArray(arr2, size2);

        // Creating object obj for class Solution
        Solution obj;
        // Calling function of Solution class
        obj.merge(arr1, arr2, size1, size2);

        //print the arrays after merge
        printArray(arr1, size1);
        printArray(arr2, size2);
    }
}

// finction to get array input from user
void readArray(int *arr, int size) {
    for (int element = 0; element < size; element++) {
        cin >> arr[element];
    }
}


// function to print out the arrays on to the screen
void printArray(int *arr, int size) {
    for (int element = 0; element < size; element++) {
        cout << arr[element];
    }
    cout << endl;
}