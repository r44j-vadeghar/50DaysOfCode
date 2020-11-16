// C++ program to find duplicates in an array
#include <iostream>
#include <vector>
#include<cmath>
using namespace std;

// functions used in this code
void findDuplicate(vector<int> &nums);

int main(void) {
    // vector array
    vector<int> nums;

    int size, element;
    // specifying size of array
    cout << "Enter number of elements in array: ";
    cin >> size;

    // pushing element to vector array
    for (int i = 0; i < size; i++) {
        cout << "\nEnter an element " << i << " to add to this vector";
        cin >> element;
        nums.push_back(element); 
    }
    findDuplicate(nums);
}

void findDuplicate(vector<int> &nums) {
    for (int i = 0; i < nums.size(); i++) {
        int x = abs(nums[i]);
        if (nums[x - 1] > 0) {
            nums[x - 1] *= -1;
        }
        else {
            cout << x;
        } 
    }
}