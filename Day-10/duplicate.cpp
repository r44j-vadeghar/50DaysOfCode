#include <iostream>
#include <vector>
#include<cmath>
using namespace std;

void findDuplicate(vector<int> &nums);

int main(void) {
    vector<int> nums;
    int size, element;
    cout << "Enter number of elements in array: ";
    cin >> size;

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