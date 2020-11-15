// C++ program to find minimum number of jumps reqired to reach end of array
#include <iostream>
using namespace std;

// functions used in this code
int minJumps(int *array, int size);

int main(void) {
    //specifying number of test cases
    int testcases;
    cout << "Enter number of testcases: ";
    cin >> testcases;

    for (int i = 0; i < testcases; i++)
    {
        // specifying size of array
        int size;
        cout << "\nEnter size of Array: ";
        cin >> size;

        // specifying array
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