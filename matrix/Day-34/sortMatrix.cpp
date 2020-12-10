/*
    C++ program to print the elements of a matrix in sorted rder.
    Given an rows x columns  matrix, where every row and column is sorted in non-decreasing order. 
    Print all elements of matrix in sorted order.

    Example 1 :
    Input : rows = 4, columns = 4
            matrix = {{10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {27, 29, 37, 48},
                    {32, 33, 39 50}}
    Output : 10 15 20 25 27 29 30 32 33 35 37 39 40 45 48 50

    Example 2 :
    Input : rows = 3, columns = 3
            matrix = {{1, 3, 4},
                    {2, 6, 7},
                    {5, 8, 9}}
    Output : 1 2 3 4 5 6 7 8 9 

    Algorithm :
    1. Create a output array of size rows x columns.
    2. Traverse the matrix from start to end and insert all the elements in output array.
    3. Sort and print the output array.
    
    Complexity Analysis :
    1. Time Complexity : O(R*C log (R*C))).
    2. Space Complexity : O(R*C), since the output array is of size R*C.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortMatrix(vector<vector<int> > matrix, int size);

int main(void) {
    int size;
    cout << "Enter size of the matrix: ";
    cin >> size;

    vector<vector<int> > matrix(size, vector<int>(size, 0));
    cout << "Enter " << size*size << " matrix elements: ";
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            cin >> matrix[i][j];

    sortMatrix(matrix, size);
}

void sortMatrix(vector<vector<int> > matrix, int size) {
    // Create a vector to store elements of matrix
    vector<int> output;
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            output.push_back(matrix[i][j]);

    // Sort output vector
    sort(output.begin(), output.end());

    // print output vector
    for (int i = 0; i < size * size; i++)
        cout << output.at(i) << " ";
    
}