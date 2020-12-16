/*
    Median in a row-wise sorted Matrix 
    Given a row wise sorted matrix of size RxC where R and C are always odd, find the median of the matrix.

    Example 1:
        Input: R = 3, C = 3,
                M = [[1, 3, 5], 
                    [2, 6, 9], 
                    [3, 6, 9]]
        Output: 5
        Explanation: Sorting matrix elements gives us {1,2,3,3,5,6,6,9,9}. Hence, 5 is median. 

    Example 2:
        Input: R = 3, C = 1
                M = [[1], [2], [3]]
        Output: 2

    Algorithm:
    1. Take a vector array and push_back all the elements of matrix into it.
    2. Sort the vector array.
    3. Find mid index value of vector array
    4. If size of array is even then return vector array of mid + vector array of mid + 1 / 2.
    5. If not even then return vector array of mid
*/
#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 1000
using namespace std;

int median(int array[MAX][MAX], int rows, int coloumns);

int main(void) {
    int rows, coloumns;
    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of coloumns: ";
    cin >> coloumns;

    int array[MAX][MAX];
    cout << "Enter " << rows*coloumns << " matrix elements: ";
    for (int r = 0; r < rows; r++)
        for (int c = 0; c < coloumns; c++)
            cin >> array[r][c];

    cout << median(array, rows, coloumns) << endl;
}

int median(int array[MAX][MAX], int rows, int coloumns) {
    vector<int> mergedArray;

    for (int r = 0; r < rows; r++)
        for (int c = 0; c < coloumns; c++)
            mergedArray.push_back(array[r][c]);

    sort(mergedArray.begin(), mergedArray.end());

    int mid = (mergedArray.size() - 1) / 2;

    if(mergedArray.size() % 2 == 0) {
        return (mergedArray[mid] + mergedArray[mid + 1]) / 2;
    }

    return mergedArray[mid];
}