/*
    Given a N x N matrix, where every row and column is sorted in non-decreasing order.
    Find the kth smallest element in the matrix.

    Example 1:
    Input: size = 4
            matrix[][] =     {{16, 28, 60, 64},
                            {22, 41, 63, 91},
                            {27, 50, 87, 93},
                            {36, 78, 87, 94 }}
            K = 3
    Output: 27
    Explanation: 27 is the 3rd smallest element.

    Example 2:
    Input: size = 4
            matrix[][] =     {{10, 20, 30, 40}
                            {15, 25, 35, 45}
                            {24, 29, 37, 48}
                            {32, 33, 39, 50}}
            K = 7
    Output: 30
    Explanation: 30 is the 7th smallest element.

    Approach:
    1. Create a vector 'output' of size size * size.
    2. Traverse through the given matrix and add all elements to the vector 'output'.
    3. Sort the 'output' vector.
    4. return kth element.  
*/
#include <iostream>
#include <algorithm>
#include <vector>
#define MAX 1000
using namespace std;

int kthSmallest(int matrix[MAX][MAX], int size, int k);

int main() {
    int size;
    cout << "Enter row or coloumn size: ";
    cin >> size;

    int matrix[MAX][MAX];
    cout << "Enter " << size*size << " matrix elements: ";
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            cin >> matrix[i][j];

    int k;
    cout << "Enter k value: ";
    cin >> k;

    cout << kthSmallest(matrix, size, k) << endl;
    return 0;
}

int kthSmallest(int matrix[MAX][MAX], int size, int k) {
    vector<int> output;
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            output.push_back(matrix[i][j]);
    
    sort(output.begin(), output.end());
    return output.at(k - 1);
}

