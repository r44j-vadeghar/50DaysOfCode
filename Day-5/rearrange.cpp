// C++ program to rearrange array by keeping negatives aside and positives on the other side
#include <iostream>
using namespace std;

// functions used in this code
void reArrange(int *array, int size);
void printArray(int *array, int size);

int main(void) {
    int array[] = {1, -8, 4, 9, -6, -2};

    // specifying size of array
    int size = sizeof(array) / sizeof(array[0]);
    
    cout << "Given Array: ";
    printArray(array, size);
    reArrange(array, size);
    cout << "Output array: ";
    printArray(array, size);
}

void reArrange(int *array, int size) {
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] < 0) {
            if (i != j) {
                swap(array[i], array[j]);
            }
            j++;
        }   
    }
}

void printArray(int *array, int size) {
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << "\n";
}