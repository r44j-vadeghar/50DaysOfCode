// C++ program to sort the array elements given by user in ascending order using MERGE-SORT

#include <iostream>
using namespace std;

// functions used in this code
void mergesort(int *arr, int start, int end);
void merge(int *arr, int start, int mid, int end);
void printArray(int *arr, int size);

int main() {
    // specifying array size
    int size;
    cout << "Enter size of the array: \n";
    cin >> size;

    // specifying array
    int array[size]; 
    for (int i = 0; i < size; i++) {
        cout << "Array Element " << i + 1 << ": ";
        cin >> array[i];
    }

    mergesort(array, 0, size-1);
    printArray(array, size);
}

void mergesort(int *arr, int start, int end) {
    // calculating mid value to divide arr into two halves
    int mid = (start + end) / 2;
    if(start < end) {
        mergesort(arr, start, mid); //recursive call
        mergesort(arr, mid + 1, end); //recursive call

        merge(arr, start, mid, end);
    }
}

// merge 2 subarrays of attribute arr
void merge(int *arr, int start, int mid, int end) {

    // start of specifying size of two sub arrays and copying elements from main array
    int l = mid - start + 1;
    int r = end - mid;
    int leftArr[l], rightArr[r];
    for(int i = 0; i < l; i++) {
        leftArr[i] = arr[start + i];
    }
    for (int j = 0; j < r; j++) {
        rightArr[j] = arr[mid + 1 + j];
    }
    // end of specifying size of two sub arrays and copying elements from main array

    // i is the initial index of first sub array
    // j is the initial index of second sub array
    // k is the initial index of merged sub array
    int i = 0, j = 0, k = start;

    while (i < l && j < r) {
        if(leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        }
        else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    //copy the remaining elements of leftArr if any
    while (i < l) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    //copy the remaining elements of rightArr if any
    while (j < r) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "\t";
    } 
}