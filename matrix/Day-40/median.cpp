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