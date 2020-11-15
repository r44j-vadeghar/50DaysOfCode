#include <iostream>
using namespace std;

int minJumps(int *array, int size);

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

        int output = minJumps(array, size);
        cout << output;
    }
}

int minJumps(int *array, int size) {
    int count = 0;
    for (int i = 0; i < size - 1; i += array[i])
    {
        count++;
    }
    return count;
}