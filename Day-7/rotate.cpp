// C++ program to rotate an array by one element each
#include <iostream>
using namespace std;

// functions used in this code
void rotateArr(int *array, int size);
void printArray(int *array, int size);

int main(void) {
    //specifying number of test cases
    int testcases;
    cout << "Enter number of testcases: ";
    cin >> testcases;

    for (int i = 0; i < testcases; i++)
    {
        //Specifying size of array
        int size;
        cout << "\nEnter size of Array: ";
        cin >> size;

        //specifying array
        cout << "\nEnter elements of Array: ";
        int array[size];
        for (int i = 0; i < size; i++) {
            cin >> array[i];
        }
        
        rotateArr(array, size);
        printArray(array, size);
    }
}

void rotateArr(int *array, int size) {
    // duplicating last element
    int temp = array[size - 1];

    // rotating all elements by 1(except 0th location)
    for (int i = size - 1; i > 0; i--)
    {
        array[i] = array[i - 1];
    }

    // putting duplicated element into 0th laction of array
    array[0] = temp;
}

void printArray(int *array, int size) {
    for (int i = 0; i < size; i++)
    {
        cout << array[i];
    }
    cout << '\n';
}