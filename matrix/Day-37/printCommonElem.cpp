/*
    C++ program to find the common elements in all the rows of a matrix.
    Given an R * C matrix, find all common elements present in all rows.

    Example : 
    Input : R = 4, C = 5
        matrix = {{1, 2, 1, 4, 8},
                {3, 7, 8, 5, 1},
                {8, 7, 7, 3, 1},
                {8, 1, 2, 7, 9}}
    Output : 1 8 or 1 8
    Explanation : 8 and 1 are present in all rows.

    Algorithm :
    1. Insert all elements of the first row in an map. 
    2. For every other element in remaining rows, we check if it is present in the map. 
    3. If it is present in the map and is not duplicated in current row, we increment count of the element in map by 1, else we ignore the element. 
    4. If an element appears number of times equal to number of rows, we print the element.
    Complexity Analysis :
    1. The time complexity of this solution is O(R * C) as we are doing only one traversal of the matrix.
    2. Space complexity is O(C) as a map is used to store one row elements.
*/
#include <iostream>
#include <unordered_map>
#define MAX 1000
using namespace std;

void printCommonElem(int matrix[MAX][MAX], int rows, int coloumns);

int main(void) {
    int rows, coloumns;
    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of coloumns: ";
    cin >> coloumns;

    int matrix[MAX][MAX];
    cout << "Enter " << rows*coloumns << " matrix elements: ";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < coloumns; j++)
            cin >> matrix[i][j];

    printCommonElem(matrix, rows, coloumns);
}

void printCommonElem(int matrix[MAX][MAX], int rows, int coloumns) {

    unordered_map<int, int> myDictionary;
    
    for (int i = 0; i < coloumns; i++)
        myDictionary[matrix[0][i]] = 1;

    for (int i = 1; i < rows; i++) {
        for (int j = 0; j < coloumns; j++) {

            // Counts elem of a row once. This statement excludes duplicates
            if (myDictionary[matrix[i][j]] == i) {
                myDictionary[matrix[i][j]]++;
            
            // print if count of elem reached to number of rows
            if (myDictionary[matrix[i][j]] == rows - 1)
                cout << matrix[i][j] << endl;

        }
    }
}