// C++ program to find smallest sub array count with greatest sum
#include <iostream>
#include <climits>
using namespace std;

// functions used in this code
int smallestSubArrayWithGreatestSum(int *array, int size, int totalSum);
int maximun(int *array, int size);

//Driver code
int main(void) {
    // Specifying number of testcases
    int testcases;
    cout << "Enter number of testcases: ";
    cin >> testcases;

    // traversing through each testcase
    for(int i = 0; i < testcases; i++) {
        // Specifying size of the array
        int size, sum;
        cout << "Enter size of the array: ";
        cin >> size;

        // Specifying the array and it's elements
        int array[size];
        cout << "Enter elements of array: ";
        for(int i = 0; i < size; i++) {
            cin >> array[i];
        }

        // Specifying sum value
        cout << "Enter your sum: ";
        cin >> sum;

        // Displaying output on the screen
        cout << smallestSubArrayWithGreatestSum(array, size, sum) << endl;
    }
}

// function to find smallest sub array count with greatest sum
int smallestSubArrayWithGreatestSum(int *array, int size, int totalSum) {
    int counter = INT_MAX, error = 0;
    for(int i = 0; i < size; i++) {
        for(int j = i; j < size; j++) {
            int sum = 0, count = 0;
            for(int k = i; k <= j; k++) {
                sum += array[k];
                count++;
            }
            if(sum > totalSum) {
                if(counter > count) {
                    counter = count;
                }
            }
            if(totalSum < sum) {
                error++;
            }
        }
    }
    if(error == 0) {
        return -1;
    }
    return counter;
}
