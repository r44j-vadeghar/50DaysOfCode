// C++ program to find the Inversion Count in the array.
#include <iostream>
using namespace std;

// Functions used in this code
long long int inversionCount(long long *array, long long size);
void getElements(long long *array, long long size);

// Driver function
int main(void) {
    // Specifying size of array
    long long size;
    cout << "Enter size of elements: ";
    cin >> size;

    // specifying array
    long long array[size];
    cout << "\nEnter elements of array: ";
    getElements(array, size);

    // displaying output
    cout << "Inversion count = " << inversionCount(array, size) << endl;
}

// function to get elements of array from user
void getElements(long long *array, long long size) {
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
}

// function to find inversion count
long long int inversionCount(long long *array, long long size) {
    long long int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] > array[j])
            {
                count++;
            }   
        }  
    }
    return count;
}