// C++ program to minimize the maximum difference between the heights
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// functions used in this code
int getMinDiff(int *array, int size, int k);

int main(void) {
    //specifying number of test cases
    int testcases;
    cout << "Enter number of testcases: ";
    cin >> testcases;

    for (int i = 0; i < testcases; i++)
    {
        
        int size, k;
        //Specifying size of array
        cout << "\nEnter size of Array: ";
        cin >> size;

        cout << "\nEnter k value: ";
        cin >> k;

        //specifying array
        cout << "\nEnter elements of Array: ";
        int array[size];
        for (int i = 0; i < size; i++) {
            cin >> array[i];
        }
        int output = getMinDiff(array, size, k);
        cout << output;
    }
}

int getMinDiff(int *array, int size, int k) {
    for (int i = 0; i < size; i++) {
        if (array[i] - k <= 0) {
            array[i] = array[i] + k;
        }
        else {
            array[i] = array[i] - k;
        }
    }
    sort(array, array + size);
    return array[size - 1] - array[0];
}