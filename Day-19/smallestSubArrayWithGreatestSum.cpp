#include <iostream>
#include <climits>
using namespace std;

int smallestSubArrayWithGreatestSum(int *array, int size, int totalSum);
int maximun(int *array, int size);

int main(void) {
    int testcases;
    cout << "Enter number of testcases: ";
    cin >> testcases;

    for(int i = 0; i < testcases; i++) {
        int size, sum;
        cout << "Enter size of the array: ";
        cin >> size;

        int array[size];
        cout << "Enter elements of array: ";
        for(int i = 0; i < size; i++) {
            cin >> array[i];
        }

        cout << "Enter your sum: ";
        cin >> sum;

        cout << smallestSubArrayWithGreatestSum(array, size, sum) << endl;
    }
}

int smallestSubArrayWithGreatestSum(int *array, int size, int totalSum) {
    int counter = INT_MAX, error = 0;
    for(int i = 0; i < size; i++) {
        for(int j = i; j < size; j++) {
            int sum = 0, count = 0;
            for(int k = i; k <= j; k++) {
                sum += array[k];
                count++;
            }
            if(sum > totalSum) {
                if(counter > count) {
                    counter = count;
                }
            }
            if(totalSum < sum) {
                error++;
            }
        }
    }
    if(error == 0) {
        return -1;
    }
    return counter;
}
