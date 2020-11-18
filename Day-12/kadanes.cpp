#include <iostream>
#include<climits>
using namespace std;

int maxSubarray(int *array, int size);

int main(void) {
    int testcases;
    cout << "Enter number of testcases: ";
    cin >> testcases;
    for (int i = 0; i < testcases; i++)
    {
        int size;
        cout << "\nEnter the size of the array: ";
        cin >> size;

        int array[size];
        cout << "\nEnter the array elements: ";
        for (int i = 0; i < size; i++)
        {
            cin >> array[i];
        }
        
        cout << maxSubarray(array, size);
    } 
}

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