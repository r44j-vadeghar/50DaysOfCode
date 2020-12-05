// C++ program to find median of an array
#include <iostream>
using namespace std;

// functions used in this code
int median(int array[], int size);
bool isEven(int num);

// Driver code
int main(void) {
    // Specifying testcases
    int testcases;
    cout << "Enter number of testcases: ";
    cin >> testcases;

    // Traversing through each testcase
    for(int i = 0; i < testcases; i++) {
        // Specifying size of the array
        int size;
        cin >> size;

        // Specifying the array
        int array[size];
        for(int i = 0; i < size; i++) {
            cin >> array[i];
        }

        // Displaying output onto the screen
        cout << median(array, size) << endl;
    }
}
// function to find median of the array
int median(int array[], int size) {
    int diff = 0;
    sort(array, array + size);
    if (isEven(size)) {
        diff = (array[size/2] - array[(size/2) - 1]) / 2;
        return array[(size/2) - 1] + diff;
    }
    return array[size / 2];
}

// function returns true if even, returns false if not an even
bool isEven(int num) {
    return (num%2 == 0);
}