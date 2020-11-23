// C++ program to find count pairs with given sum 
#include <iostream>
using namespace std;

// class with public function
class Solution {   
public:

    //function to get count of pairs with given sum
    int getPairsCount(int *array, int size, int k) {
        int count = 0;
        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                if (array[i] + array[j] == k) {
                    count++;
                }
            }
        }
        return count;
    }
};

// Driver Code
int main(void) {
    // Specifying size of array and k value
    int size, k;
    cout << "Enter size of the array: ";
    cin >> size;
    cout << "Enter k value: ";
    cin >> k;

    // specifying array
    int array[size];
    cout << "Enter elements of array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    // creating object obj for solution class
    Solution obj;
    // displaying output to the usre
    cout << obj.getPairsCount(array, size, k) << endl;
}