// C++ program to find common elements of given 3 arrays by user
#include <iostream>
#include <vector>
#include <set>
using namespace std;

// functions used in this code
vector<int> commonElements(int array1[], int array2[], int array3[], int size1, int size2, int size3);
void getInput(int *array, int size);
void printArray(int *array, int size);
vector<int> _unique (vector<int> r) ;

//Driver code
int main(void) {
    int size1 = 0, size2 = 0, size3 = 0;

    //Read the size of the first array
    cout << "Enter the sizes of 3 arrays:";
    cin >> size1 >> size2 >> size3;

    //Create 2 arrays with given size
    int *array1 = new int[size1];
    int *array2 = new int[size2];
    int *array3 = new int[size3];

    //Initialize the array1 elements
    cout << "Enter the elements of first array\n";
    getInput(array1, size1);

    //Initialize the array2 elements
    cout << "Enter the elements of second array\n";
    getInput(array2, size2);

    //Initialize the array3 elements
    cout << "Enter the elements of third array\n";
    getInput(array3, size3);

    //Print the arrays
    cout << "Array 1: ";
    printArray(array1, size1);

    cout << "Array 2: ";
    printArray(array2, size2);

    cout << "Array 3: ";
    printArray(array3, size3);

    //Print the resultant vector
    vector<int> result = commonElements(array1, array2, array3, size1, size2, size3);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
}

//Function to find the common elements from 3 arrays given by user
vector<int> commonElements(int array1[], int array2[], int array3[], int size1, int size2, int size3) {
    int i = 0, j = 0, k = 0;

    vector<int> result;
    vector<int> temp;

    //Traverse through first, second arrays and find the common elements between them and store them in 'temp' vector
    while (i < size1 && j < size2) {
        if (array1[i] < array2[j]) {
            i++;
        }
        else if (array2[j] < array1[i]) {
            j++;
        }
        else {
            temp.push_back(array1[i]);
            i++;
            j++;
        }
    }

    //Traverse through the third array, temp to find their intersection and store them in 'result' vector
    int x = 0;
    while (k < size3 && x < temp.size()) {
        if (array3[k] < temp[x]) {
            k++;
        }
        else if (array3[k] > temp[x]) {
            x++;
        }
        else {
            result.push_back(array3[k]);
            k++;
            x++;
        }
    }
    //Remove the duplicates and return the 'result' vector
    return _unique(result);
}

//Function to find the vector without duplicate elements
vector<int> _unique (vector<int> result) {
    vector<int> temp;
    for (int i = 0; i < result.size(); i++) {
        if (temp.empty()) {
           temp.push_back(result[i]);
        }
        if (temp.back() != result[i]) {
           temp.push_back(result[i]);
        }
    }
    return temp;
}

//Function to read array elements
void getInput(int *array, int size) {
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >>  array[i];
    }
}

//Function to print array
void printArray(int *array, int size) {
    for (int index = 0; index < size; index++) {
        cout << array[index] << " ";
    }
    cout << endl;
}