// C++ program to calculate the median of two sorted arrays of same size
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

// Functions used in this code
int getMedian(int array1[], int array2[], int n);
void readArray(int *array, int size);
void printArray(int *array, int size);

// Driver Code
int main(void) {
    int testcases;
    cout << "Enter number of testcases: ";
    cin >> testcases;

    for(int i = 0; i < testcases; i++) {
        int size;
        cin >> size;

        int array1[size];
        readArray(array1, size);

        int array2[size];
        readArray(array2, size);

        cout << getMedian(array1, array2, size) << endl;
    }
}

// Function to print array onto the screen
void printArray(int *array, int size) {
    for(int i = 0; i< size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

// Function to get array input from user
void readArray(int *array, int size) {
    for(int i = 0; i < size; i++) {
        cin >> array[i];
    }
}

// Function to find median
int getMedian(int array1[], int array2[], int n) { 
    int i = 0, j = 0, count;
    int m1 = INT_MIN, m2 = INT_MIN; 

    for (count = 0; count <= n; count++) {
        if (i == n) { 
            m1 = m2; 
            m2 = array2[0]; 
            break; 
        } else if (j == n) { 
            m1 = m2; 
            m2 = array1[0]; 
            break; 
        } 

        if (array1[i] <= array2[j]) { 
            m1 = m2;  
            m2 = array1[i]; 
            i++; 
        } else { 
            m1 = m2;  
            m2 = array2[j]; 
            j++; 
        } 
    }
    return (m1 + m2)/2; 
} 