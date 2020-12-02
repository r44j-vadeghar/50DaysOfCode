// C++ code to put positive and negative elements alternatively in sequence
#include <iostream>
#include <algorithm>
using namespace std;

// functions helped to reach our goal
void alternatePosNeg(int *array, int size);
void printArray(int *array, int size);

// Driver Code
int main() {
    int testcases;
    cin >> testcases;

    // Traversing through each testcase
    while(testcases--) {
        // Specifying the size of the array
        int size;
        cin >> size;

        // Specifying array
        int array[size];
        for(int i = 0; i < size; i++) {
            cin >> array[i];
        }
        
        // calling function
        alternatePosNeg(array, size);
        // calling function to display output array
        printArray(array, size);
    }
    return 0;
}

// function to put positive and negative elements alternatively in sequence
void alternatePosNeg(int *array, int size) {
    int posCount = 0, negCount = 0;
    for(int i = 0; i < size; i++) {
        if(array[i] >= 0) {
            posCount++;
        } else {
            negCount++;
        }
    }
    
    int pos[posCount], neg[negCount];
    int i = 0, j = 0, k = 0;
    while(k < size) {
        if(array[k] < 0) {
            neg[i] = array[k];
            i++;
            k++;
        } else {
            pos[j] = array[k];
            j++;
            k++;
        }
    }
    i = 0, j = 0, k = 0;
    while(i < posCount || j < negCount) {
        if(k%2 == 0 || k == 0) {
            if(j == negCount) {
                break;
            } else {
                array[k] = neg[j];
                j++;
                k++;
            }
        } else {
            if(i == posCount) {
                break;
            } else {
                array[k] = pos[i];
                i++;
                k++;
            }
        }
    }
    while(i < posCount + 1) {
        array[k] = pos[i];
        i++;
        k++;
    }
    while(j < negCount + 1) {
        array[k] = neg[j];
        j++;
        k++;
    }
}

// function to print array
void printArray(int *array, int size) {
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}