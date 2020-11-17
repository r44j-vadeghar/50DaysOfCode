#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void readArray(int *arr, int size);
void printArray(int *arr, int size);

class Solution {
    public:
    void merge(int *arr1, int *arr2, int n, int m) {
        int i = 0, j = 0;
        while (i < n) {
            if (arr1[i] >= arr2[j]) {
                swap(arr1[i], arr2[j]);
                sort(arr2, arr2 + m);
                i++;
            }
            else {
                i++;
            }
        }
    }
};

int main(void) {
    int testcases, i;
    cout << "Enter number of testcases: ";
    cin >> testcases;

    for (i = 0; i < testcases; i++)
    {
        int n, m;
        cout << "\nEnter size of two Arrays: ";
        cin >> n >> m;

        int arr1[n], arr2[m];
        cout << "\nEnter elements of Array 1: ";
        readArray(arr1, n);
        cout << "\nEnter elements of Array 2: ";
        readArray(arr2, m);

        Solution obj;
        obj.merge(arr1, arr2, n, m);

        printArray(arr1, n);
        printArray(arr2, m);
    }
}

void readArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i];
    }
    cout << endl;
}