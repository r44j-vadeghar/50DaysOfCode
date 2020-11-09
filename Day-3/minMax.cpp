#include <iostream>
using namespace std;

void mergesort(int *arr, int start, int end);
void merge(int *arr, int start, int mid, int end);
void minMax(int *array, int *newArray, int size);


int main() {
    int array[] = {1, 4, 8, 7, 6, 9};
    int size = sizeof(array) / sizeof(array[0]);
    int newArr[2];

    mergesort(array, 0, size-1);
    minMax(array, newArr, size);
    cout << "Minimum: " << newArr[0] << "\nMaximum: " << newArr[1];
}

void mergesort(int *arr, int start, int end) {
    int mid = (start + end) / 2;
    if(start < end) {
        mergesort(arr, start, mid);
        mergesort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

void merge(int *arr, int start, int mid, int end) {
    int l = mid - start + 1;
    int r = end - mid;
    int leftArr[l], rightArr[r];
    
    for(int i = 0; i < l; i++) {
        leftArr[i] = arr[start + i];
    }
    for (int j = 0; j < r; j++) {
        rightArr[j] = arr[mid + 1 + j];
    }

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

    while (i < l) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < r) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

void minMax(int *array, int *newArray, int size) {
    newArray[0] = array[0];
    newArray[1] = array[size - 1];
}