// C++ code to find median of two different sized arrays that are sorted
#include <iostream>
#include <algorithm>
using namespace std;

// functions helped to reach our goal
int median(int array[], int size);
bool isEven(int num);
void mergeSort(int array1[], int array2[], int mergeArray[], int size1, int size2);
void readArray(int *array, int size);

// Driver Code
int main(void) {
    int testcases;
    cout << "Enter number of testcases: ";
    cin >> testcases;

    // Traversing through each testcase
    while(testcases--) {
        // Specifying 2 different sizes for 2 arrays
        int size1, size2;
        cin >> size1 >> size2;

        // specifying array1 with size1
        int array1[size1];
        readArray(array1, size1);

        // Specifying array2 with size2
        int array2[size2];
        readArray(array2, size2);

        // initialising an extra array to push elements of array1 and 2 sorted together
        int mergeArray[size1 + size2];
        mergeSort(array1, array2, mergeArray, size1, size2);

        // Displaying median of mergeArray onto the screen
        cout << median(mergeArray, size1+size2) << endl;
    }
}

// function to get user input for the array elements
void readArray(int *array, int size) {
    for(int i = 0; i < size; i++) {
        cin >> array[i];
    }
}

// function to find median of the array
int median(int array[], int size) {
    int diff;
    if (isEven(size)) {
        diff = (array[size/2] - array[(size/2) - 1]) / 2;
        return array[(size/2) - 1] + diff;
    }
    return array[size / 2];
}

// function to find whether the number is even or not
bool isEven(int num) {
    return (num%2 == 0);
}

// function to push elements of array1 and 2 sorted together into mergeArray of size1+size2
void mergeSort(int array1[], int array2[], int mergeArray[], int size1, int size2) {
    int i = 0, j = 0, k = 0;
    while(i < size1 && j < size2) {
        if(array1[i] > array2[j]) {
            mergeArray[k] = array2[j];
            k++;
            j++;
        }
        else if(array1[i] < array2[j]) {
            mergeArray[k] = array1[i];
            k++;
            i++;
        }
        else {
            mergeArray[k] = array1[i];
            i++;
            k++;
            mergeArray[k] = array2[j];
            j++;
            k++;
        }
    }
    while(i < size1) {
        mergeArray[k] = array1[i];
        i++;
        k++;
    }
    while(j < size2) {
        mergeArray[k] = array2[j];
        j++;
        k++;
    }
}