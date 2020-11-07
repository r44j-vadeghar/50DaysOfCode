#include <iostream>
using namespace std;

void printArray(int *array, int size);
void reverse(int *array, int start, int end);
void swap(int *a, int *b);

int main() {
    int array[] = {1, 4, 8, 7, 6, 9};
    int size = sizeof(array) / sizeof(array[0]);
    cout << "Given array is: \n";
    printArray(array, size);
    reverse(array, 0, size - 1);
    cout << "Output array is: \n";
    printArray(array, size);
}

void reverse(int *array, int start, int end) {
    if (start >= end) {
        return;
    }
    swap(&array[start], &array[end]);
    reverse(array, start + 1, end - 1);
}

void swap(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void printArray(int *array, int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i];
    }
    cout << "\n";
}
    