// C++ program to find the minimum number of swaps required to bring all the numbers less than or equal to k together
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// functions used in this code
int minSwaps(int array[], int size, int k);

// Driver Code
int main(void) {
    // Specifying number of testcases
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

        // specifying k value
        int k;
        cin >> k;
        
        // Diplaying output onto the screen
        cout << minSwaps(array, size, k) << endl;
    }
}

// function to find the minimum number of swaps required to bring all the numbers less than or equal to k together
int minSwaps(int array[], int size, int k) {
    int lessThanKCount = 0;
    for(int i = 0; i < size; i++) {
        if (array[i] <= k) {
            lessThanKCount++;
        }
    }

    int noOfSwapCount = 0;
    for(int i = 0; i < lessThanKCount; i++) {
        if (array[i] > k) {
            noOfSwapCount++;
        }
    }

    int ans = noOfSwapCount;
    for (int i = 0, j = lessThanKCount; j < size; ++i, ++j) { 

        if (array[i] > k) {
            --noOfSwapCount;
        }
        if (array[j] > k) {
            ++noOfSwapCount; 
        }

        ans = min(ans, noOfSwapCount); 
    } 
    return ans;
}
