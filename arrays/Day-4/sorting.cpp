// C++ program to sort 0's, 1's and 2's
#include <iostream>
using namespace std;

// functions used in this code
void sort012(int *array, int size);
void printArray(int *array, int size);

int main(void) {
    //specifying number of test cases
    int testcases;
    cout << "Enter number of testcases: ";
    cin >> testcases;

    for (int i = 0; i < testcases; i++) {
        //Specifying size
        int size;
        cout << "\nEnter size of the array: ";
        cin >> size;

        //specifying array
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

    // Iterate till all the elements are sorted
    while (mid <= high)
    {
        switch (array[mid])
        {
            //If the element is 0
            case 0:
                swap(array[low], array[mid]);
                low++;
                mid++;
                break;

            //If the element is 1
            case 1:
                mid++;
                break;

            // If the element is 2
            case 2:
                swap(array[mid], array[high]);
                high--;
                break;

            // If there's other elements other than
            // 0, 1 and 2... then, skip the process
            default:
                break;
        }
    }  
}

//print array
void printArray(int *array, int size) {
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << "\n";
}