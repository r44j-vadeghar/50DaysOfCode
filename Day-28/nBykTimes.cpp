/*
    C++ program to find all elements in an array that appear more than n/k times.

    Given an array of size n, find all elements in array that appear more than n/k times. 
    Example:
        Input : array = {3, 1, 2, 2, 1, 2, 3, 3} and k = 4
        Output : 2, 3
        Explanation : The size of array is 8 (or n = 8), so we need to find all elements that appear more than 2 (or 8/4) times. 
        There are two elements that appear more than two times, 2 and 3. 

    Approach :
    1. initialise an unordered map with the help of unordered_map header file.
    2. declare keys of unordered map to array elements
    3. increment those key values for every element of array.
        for example... array[0] = 2; then increment unordered map of key 2... then value at key to gets incremented
    4. then print of keys of unordered map whose value is greater than n / k.
*/

#include <iostream>
#include <unordered_map>
using namespace std;

void greaterThanNbyK(int *array, int n, int k);

int main(void) {
    int n, k;
    cout << "Enter size of the array: ";
    cin >> n;

    int array[n];
    cout << "Enter elements of array: ";
    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }

    cout << "Enter k value: ";
    cin >> k;

    greaterThanNbyK(array, n, k);
}

void greaterThanNbyK(int *array, int n, int k) {

    unordered_map<int, int> myDictionary;
    
    for (int i = 0; i < n; i++) {
        myDictionary[array[i]]++;
    }

    for (const auto i : myDictionary) {
        if (i.second > (n/k)) {
            cout << i.first << endl;
        }
    }
}