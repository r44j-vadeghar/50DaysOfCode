#include <iostream>
using namespace std;

void sort012(int *array, int size);
void printArray(int *array, int size);

int main(void) {
    int testcases;
    cout << "Enter number of testcases: ";
    cin >> testcases;

    for (int i = 0; i < testcases; i++) {
        int size;
        cout << "\nEnter size of the array: ";
        cin >> size;
        int array[size];
        cout << "\nEnter elements of the array: ";
        for (int i = 0; i < size; i++) {
            cin >> array[i];
        }
        sort012(array, size);
        cout << "\nOutput array is: ";
        printArray(array, size);
    } 
}

void sort012(int *array, int size) {
    int low = 0, mid = 0, high = size - 1;
    while (mid <= high)
    {
        switch (array[mid])
        {
        case 0:
            swap(array[low], array[mid]);
            low++;
            mid++;
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(array[mid], array[high]);
            high--;
            break;
        default:
            break;
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