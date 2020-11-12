#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void readArray(int *arrayA, int m);
void printUnion(int *arr1, int *arr2, int m, int n);

int main(void) {
    int testcases;
    cout << "Enter number of testcases: ";
    cin >> testcases;
    for (int i = 0; i < testcases; i++)
    {
        int m, n;
        cout << "\nEnter size of Array A and Array B: ";
        cin >> m >> n;

        int arrayA[m], arrayB[n];
        cout << "Enter elements of array A";
        readArray(arrayA, m);
        cout << "Enter elements of array B";
        readArray(arrayB, n); 

        sort(arrayA, arrayA + m);
        sort(arrayB, arrayB + n);

        printUnion(arrayA, arrayB, m, n);   
    }
}

void printUnion(int *arr1, int *arr2, int m, int n) {
    int i = 0, j = 0, count = 0; 
    while (i < m && j < n) { 
        if (arr1[i] < arr2[j]) {
            i++;
            count++;
        }
        else if (arr2[j] < arr1[i]) {
            j++;
            count++;
        }
        else { 
            j++;
            i++;
            count++; 
        } 
    } 
    while (i < m) {
        i++;
        count++;
    }
    while (j < n) {
        j++;
        count++;
    }
    cout << count << '\n';
}

void readArray(int *array, int size) {
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    } 
}