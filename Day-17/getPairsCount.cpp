#include <iostream>
using namespace std;

class Solution {   
public:
    int getPairsCount(int *array, int size, int k) {
        int count = 0;
        /* for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                if (array[i] + array[j] == k) {
                    count++;
                }
            }
        }  */
        for (int i = 0; i < size; i++)
        {
            switch (array[i])
            {
            case :
                /* code */
                break;
            
            default:
                break;
            }
        }
        
        return count;
    }
};

int main(void) {
    int size, k;
    cout << "Enter size of the array: ";
    cin >> size;
    cout << "Enter k value: ";
    cin >> k;

    int array[size];
    cout << "Enter elements of array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    Solution obj;
    cout << obj.getPairsCount(array, size, k) << endl;
}