#include <iostream>
#include <vector>
using namespace std;

void spirallyTraverse(vector<vector<int> > array, int rows, int coloumns);

int main(void) {

    int rows, coloumns;
    cout << "Enter number of rows and coloumns: ";
    cin >> rows >> coloumns;

    vector<vector<int> > matrix(rows);
    cout << "Enter matrix elements of row size " << rows << " and coloumn size " << coloumns << ": ";
    for (int i = 0; i < rows; i++) {
        matrix[i].assign(coloumns, 0);
        for (int j = 0; j < coloumns; j++)
            cin >> matrix[i][j];
    }
    
    spirallyTraverse(matrix, rows, coloumns);
}

void spirallyTraverse(vector<vector<int> > array, int rows, int coloumns) {
    int rowStart = 0, rowEnd = rows - 1, colStart = 0, colEnd = coloumns - 1;

    while(rowStart <= rowEnd && colStart <= colEnd){

        for (int col = colStart; col <= colEnd; col++)
            cout << array[rowStart][col] << " ";

        rowStart++;

        for (int row = rowStart; row <= rowEnd; row++)
            cout << array[row][colEnd] << " ";

        colEnd--;

        for (int col = colEnd; col >= colStart; col--)
            cout << array[rowEnd][col] << " ";

        rowEnd--;

        for (int row = rowEnd; row >= rowStart; row--)
            cout << array[row][colStart] << " ";

        colStart++;

        if(rows > coloumns && colStart == colEnd){
            for (int row = rowStart; row <= rowEnd; row++)
                cout << array[row][colEnd] << " ";
            break;
        }
        if(coloumns > rows && rowStart == rowEnd) {
            for (int col = colStart; col <= colEnd; col++)
                cout << array[rowStart][col] << " ";
            break;
        }
    }
}