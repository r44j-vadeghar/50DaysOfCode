#include <iostream>
using namespace std;

void rotateArr(int *array, int size);
void printArray(int *array, int size);

int main(void) {
    int testcases;
    cout << "Enter number of testcases: ";
    cin >> testcases;

    for (int i = 0; i < testcases; i++)
    {
        int size;
        cout << "\nEnter size of Array: ";
        cin >> size;

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
    int temp = array[size - 1];
    for (int i = size - 1; i > 0; i--)
    {
        array[i] = array[i - 1];
    }
    array[0] = temp;
}

void printArray(int *array, int size) {
    for (int i = 0; i < size; i++)
    {
        cout << array[i];
    }
    cout << '\n';
}