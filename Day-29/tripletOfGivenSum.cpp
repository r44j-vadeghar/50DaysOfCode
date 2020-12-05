/*
    C++ program to to find a triplet in an array that sum to a given value.
    Given an array A[] of N numbers and another number 'sum'.
    Print the three elements in A[] whose sum is exactly x.
    Example 1:
    Input : array[] = {1, 4, 45, 6, 10, 8}, x = 13
    Output : The Triplet is 1, 4, 8
    Example 2:
    Input : array[] = {1, 2, 4, 3, 6}, x = 10
    Output : The Triplet is 1, 3, 6
    Algorithm : 
    1. Sort the given array.
    2. Iterate through the array, for every element array[i], check if there exists a pair of sum (x - array[i]).
    3. If there exits such pair for an element, then print the element along with the pair found.
*/
#include <iostream>
#include <algorithm>
using namespace std;

void tripletOfGivenSum(int *array, int size, int x);

int main(void) {
    int n, x;
    cout << "Enter size of the array: ";
    cin >> n;

    int array[n];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    
    cout << "Enter sum(x) value: ";
    cin >> x;

    tripletOfGivenSum(array, n, x);
}

void tripletOfGivenSum(int *array, int size, int sum) {

    sort(array, array + size);

    for (int i = 0; i < size; i++) {
        int left = i, right = size - 1;

        while (left < right) {

            if (array[i] + array[left] + array[right] == sum) {
                cout << "triplet found: " << array[i] << ", " << array[left] << ", " << array[right] << endl;
                return;
            } 
            else if(array[i] + array[left] + array[right] < sum) {
                left++;
            } 
            else {
                right--;
            }

        }
    }
    cout << "triplet not found" << endl;

}