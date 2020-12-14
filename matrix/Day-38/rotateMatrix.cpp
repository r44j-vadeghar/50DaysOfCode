/*
    C++ program to rotate a square matrix by 90 degrees in clockwise direction.

    Example 1:
        Input:
        1  2  3
        4  5  6
        7  8  9
        Output:
        7  4  1
        8  5  2
        9  6  3
        Rotated the input matrix by 90 degrees in clockwise direction.
    Example 2:
        Input:
        1  2  3  4 
        5  6  7  8 
        9  10 11 12 
        13 14 15 16 
        Output:
        13  9   5  1 
        14  10  6  2 
        15  11  7  3 
        16  12  8  4

    Approach: 
    The idea is to swap corner elements and then increment corner value so that next to corner element gets swapped
    and number of iterations should be less than size / 2.
        1   2   3   4               13  9   5   1                   13  9   5   1
        5   6   7   8     ---->     14  6   7   2        ---->      14  10  6   2
        9   10  11  12              15  10  11  3                   15  11  7   3 
        13  14  15  16              16  12  8   4                   16  12  8   4
        
        Original matrix             First iteration                 second iteration

    Algorithm : 
    1. The approach is to print the elements of cycle in clockwise direction i.e. An N x N matrix will have floor(N/2) square cycles.
    2. For example, a 3 X 3 matrix will have 1 cycle. The cycle is formed by its 1st row, last column, last row, and 1st column.
    3. For each square cycle, we swap the elements involved with the corresponding cell in the matrix in the clockwise direction. We just need a temporary variable for this.
*/
#include <iostream>
#define SIZE 4
using namespace std;

void rotateMatrix(int array[SIZE][SIZE]);

int main(void) {
    int array[SIZE][SIZE];
    cout << "Enter " << SIZE*SIZE << " matrix elements: ";
    for (int r = 0; r < SIZE; r++)
        for (int c = 0; c < SIZE; c++)
            cin >> array[r][c];

    rotateMatrix(array);
}

void rotateMatrix(int array[SIZE][SIZE]) {
    for (int r = 0; r < SIZE / 2; r++) {
        for (int c = r; c < SIZE - r - 1; c++){
            int temp = array[r][c];
            array[r][c] = array[SIZE - 1 - c][r];
            array[SIZE - 1 - c][r] = array[SIZE - 1 - r][SIZE - 1 - c];
            array[SIZE - 1 - r][SIZE - 1 - c] = array[c][SIZE - 1 - r];
            array[c][SIZE - 1 - r] = temp;
        }
    }

    for (int r = 0; r < SIZE; r++) {
        for (int c = 0; c < SIZE; c++)
            cout << array[r][c] << " ";
        cout << endl;
    }
}