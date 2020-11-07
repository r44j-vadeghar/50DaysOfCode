// C++ program to reverse an array 

#include <iostream>
using namespace std;

void printArray(int *array, int size);
void reverse(int *array, int start, int end);
void swap(int *a, int *b);

int main() {
    //specifying array size
    int size;
    cout << "Enter size of the array: \n";
    cin >> size;

    //specifying array
    int array[size]; 
    for (int i = 0; i < size; i++) {
        cout << "Array Element " << i + 1 << ": ";
        cin >> array[i];
    }

    cout << "Given array is: \n";
    printArray(array, size);

    reverse(array, 0, size - 1);
    cout << "Output array is: \n";
    printArray(array, size);
}

void reverse(int *array, int start, int end) {
    //if first value is greater than last exit out of the function
    if (start >= end) {
        return; 
    }
    //swap first and last values
    swap(&array[start], &array[end]); 

    //change first and last values and then run the function again
    reverse(array, start + 1, end - 1); 
}

void swap(int *a, int *b) {
    //swapping a,b values
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void printArray(int *array, int size) {
    //printing an array
    for (int i = 0; i < size; i++) {
        cout << array[i];
    }
    cout << "\n";
}
    