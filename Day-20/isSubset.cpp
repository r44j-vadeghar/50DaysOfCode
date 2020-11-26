#include <iostream>
#include <algorithm>
using namespace std;

void readArray(int *array, int size);
bool isSubset(int *array1, int size1, int *array2, int size2);
bool isSubset2(int *array1, int size1, int *array2, int size2);

int main(void) {
    int testcases;
    cout << "Enter number of testcases: ";
    cin >> testcases;

    for(int i = 0; i < testcases; i++) {
        int size1, size2;
        cout << "Enter sizes of the array: ";
        cin >> size1 >> size2;

        int array1[size1], array2[size2];
        cout << "Enter elements of array1: ";
        readArray(array1, size1);
        cout << "Enter elements of array2: ";
        readArray(array2, size2);

        if (isSubset2(array1, size1, array2, size2)) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }
}

void readArray(int *array, int size) {
    for(int i = 0; i < size; i++) {
        cin >> array[i];
    }
}

// Method 1 (Time Complexity - O(n square))
bool isSubset(int *array1, int size1, int *array2, int size2) {
    int count = 0;
    for(int i = 0; i < size2; i++) {
        for(int j = 0; j < size1; j++) {
            if(array2[i] == array1[j]) {
                count++;
                break;
            }
        }
    }
    return count == size2;
}

// Method 2 (Time Complexity - O(n log n))
bool isSubset2(int *array1, int size1, int *array2, int size2) {
    sort(array1, array1+size1);
    sort(array2, array2+size2);
    
    int i = 0, j = 0;
    while(i < size1 && j < size2) {
        if(array1[i] == array2[j]) {
            i++;
            j++;
        }
        if(array1[i] < array2[j]) {
            i++;
        }
        if(array1[i] > array2[j]) {
            return false;
        }
    }
    return j == size2;
}
