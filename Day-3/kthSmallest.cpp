// C++ program to find kth smallest element of an array
#include <iostream>
using namespace std;

// functions used in this code
void mergesort(int *arr, int start, int end);
void merge(int *arr, int start, int mid, int end);
void kthsmallest(int *array, int k, int *newArray, int index);

//variables defied in this function is based on some constraints
int main(void) {
    //specifying number of test cases
    int testcases, index = 0;
    do {
        cout << "\nEnter number of test cases: ";
        cin >> testcases;
    } while (testcases < 0 || testcases > 100);

    //initialising newArray to get testcases number of outputs
    int newArray[testcases]; 

    for (int i = 0; i < testcases; i++)
    {
        int size;
        do {
            cout << "\nEnter number of elements in array: ";
            cin >> size; // specifying size of array
        } while (size > 10*10*10*10*10 || size < 0); 

        int array[size], k;
        cout << "\nEnter elements of array: ";
        for (int i = 0; i < size; i++) {
            cin >> array[i]; // specifying array
        }

        do {
            cout << "\nEnter k value: ";
            cin >> k;
        } while (k < 0 || k > size);

        mergesort(array, 0, size - 1);
        kthsmallest(array, k - 1, newArray, index);
        index++;
    }
    for (int i = 0; i < testcases; i++) {
        cout << newArray[i] << "\n";
    }
    
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

// Adding kth smallest elements of all test cases into newArray
void kthsmallest(int *array, int k, int *newArray, int index) {
    newArray[index] = array[k];
}