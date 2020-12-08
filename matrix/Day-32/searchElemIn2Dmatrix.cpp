#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int> > matrix, int target);

int main(void) {
    int rows, coloumns;
    cout << "Enter number of rows in the matrix: ";
    cin >> rows;

    cout << "Enter number of coloumns in the matrix: ";
    cin >> coloumns;

    vector<vector<int> > matrix(rows);
    cout << "Enter " << rows*coloumns << " matrix elements: ";
    for (int i = 0; i < rows; i++) {
        matrix[i].assign(coloumns, 0);
        for (int j = 0; j < coloumns; j++) {
            cin >> matrix[i][j];
        }
    }

    int target;
    cout << "Enter the element that needed to be found: ";
    cin >> target;

    if (searchMatrix(matrix, target))
        cout << "true";
    else 
        cout << "false";
}

bool searchMatrix(vector<vector<int> > matrix, int target) {
    int currentRow = 0, rowEnd = matrix.size() - 1, colEnd = matrix[0].size() - 1;

    if (matrix[rowEnd][colEnd] < target)
        return false;
    
    while (currentRow <= rowEnd && colEnd >= 0)
    {
        if(matrix[currentRow][colEnd] == target) 
            return true;

        if(matrix[currentRow][colEnd] > target) 
            colEnd--;

        else 
            currentRow++;
    }
    return false;
}