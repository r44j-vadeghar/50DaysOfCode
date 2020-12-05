/*
    Given an array of positive integers.
    Find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers, 
    the consecutive numbers can be in any order.
    Example 1:
        Input:
            size = 7
            array[] = {2,6,1,9,4,5,3}
        Output: 6
        Explanation: The consecutive numbers here are 1, 2, 3, 4, 5, 6. 
        These 6 numbers form the longest consecutive subsquence.
    Example 2:
        Input:
            size = 7
            array[] = {1,9,3,10,4,20,2}
        Output: 4
    Explanation: 1, 2, 3, 4 is the longest consecutive subsequence.

    Approach:
    1. Sort the given array
    2. take two variables count and maxCount 
    3. to keep track of count of subseq that we are working on and maxCount is to check max of previous subseq count and present subseq count
    4. return maxCount
*/
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int longestConseqSubseq(int *array, int size);

int main(void) {
    int n;
    cout << "Enter size of the array: ";
    cin >> n;

    int array[n];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    
    cout << longestConseqSubseq(array, n) << endl;
}

int longestConseqSubseq(int *array, int size) {

    sort(array, array + size);

    int count = 1, maxCount = INT_MIN;
    
    for (int i = 0; i < size - 1; i++) {
        if (array[i] + 1 == array[i + 1]) {
            count++;
        }
        if (array[i] + 1 != array[i + 1]) {
            maxCount = max(maxCount, count);
            count = 1;
        }
    }

    return maxCount;
}