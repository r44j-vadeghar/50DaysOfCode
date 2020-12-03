/* C++ code to find the number of pairs in an array with given sum
Make sure you read readme of day 27 before going through the code */
#include <iostream>
#include <unordered_map>
using namespace std;

// functions helped to reach our goal
int countOfPairsWithSum(int *array, int size, int sum);
int countOfPairsWithSum2(int *array, int size, int sum);

// Driver Code
int main(void) {
    int t; // testcases
    cin >> t;

    //iterate through each testcase
    while(t--) {
        /* Specifying size of the array
        and sum to find no.of pairs in the array with the sum. */
        int size, sum;
        cin >> size >> sum;

        // Specifying array
        int array[size];
        for(int i = 0; i < size; i++) {
            cin >> array[i];
        }

        // Displaying output onto the screen
        cout << countOfPairsWithSum2(array, size, sum) << endl;
    }
}

/* Method 1 - BryteForce approach with O(n square) time complexity
function to find the number of pairs in an array with given sum */
int countOfPairsWithSum(int *array, int size, int sum) {
    int count = 0;
    for(int i = 0; i < size - 1; i++) {
        for(int j = i + 1; j < size; j++) {
            if((array[i] + array[j]) == sum) {
                count++;
            }
        }
    }
    return count;
}
/* But We can reduce it to O(n) using unordered maps in C++.
Thanks to unordered_map header file that we included at the top of this file */

/* Method 2 - Optimised approach with O(n) time complexity
function to find the number of pairs in an array with given sum */

int countOfPairsWithSum2(int *array, int size, int sum) {
    // initialising count to count no.of pairs
    int count = 0;
    
    // initialising unordered map called myDictionary to store keys and values of type int.
    unordered_map<int, int> myDictionary;

    /* Declaring keys of myDictionary to elements of array. And declaring it's values with 1.
    Therefore if array given is 1,2,3
    then myDictionary will be key 1, value1 & key 2, value 1 & key 3, value 1 with size 3.
    Since it has 3 keys and 3 values */
    for(int i = 0; i < size; i++) {
        myDictionary[array[i]]++;
    }

    // iterate through each element and increment the twice_count (Notice that every pair is counted twice)
    for (int i = 0; i < size; i++)
    {
        count += myDictionary[sum - array[i]];

        /* if (arr[i], arr[i]) pair satisfies the condition, then we need to ensure that the twice_count is 
        decreased by one such that the (arr[i], arr[i]) pair is not considered */
        if (sum - array[i] == array[i])
        {
            count--;
        }
    }
    return count / 2; // Since every pair is counted twice
}