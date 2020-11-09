#include <iostream>
using namespace std;

void mergesort(int *arr, int start, int end);
void merge(int *arr, int start, int mid, int end);
void kthsmallest(int *array, int k, int *newArray, int index);

int main(void) {
    int t, index = 0;
    do {
        cout << "\nEnter number of test cases: ";
        cin >> t;
    } while (t < 0 || t > 100);
    int newArray[t];
    for (int i = 0; i < t; i++)
    {
        int n;
        do {
            cout << "\nEnter number of elements in array: ";
            cin >> n;
        } while (n > 10*10*10*10*10 || n < 0); 
        int array[n], k;
        cout << "\nEnter elements of array: ";
        for (int i = 0; i < n; i++) {
            cin >> array[i];
        }
        do {
            cout << "\nEnter k value: ";
            cin >> k;
        } while (k < 0 || k > n);
        mergesort(array, 0, n-1);
        kthsmallest(array, k - 1, newArray, index);
        index++;
    }
    for (int i = 0; i < t; i++) {
        cout << newArray[i] << "\n";
    }
    
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

void kthsmallest(int *array, int k, int *newArray, int index) {
    newArray[index] = array[k];
}