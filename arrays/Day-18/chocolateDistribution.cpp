// C++ program to find difference of max and min of eash sub array possible with value numOfStudents
#include <iostream>
#include <algorithm>
using namespace std;

// Functions used in this code
int chocolateDistributionDiff(int *array, int totalPackets, int numOfStudents);

// Driver function
int main(void) {
    // Specifying number of testcases
    int testcases;
    cout << "Enter number of testcases: ";
    cin >> testcases;

    for(int i = 0; i < testcases; i++) {
        // Specifying size of array
        int totalPackets, numOfStudents;
        cout << "Enter number of totalPackets: ";
        cin >> totalPackets;

        // specifying array
        int array[totalPackets];
        cout << "Enter number of chocolates in each packet: ";
        for(int i = 0; i < totalPackets; i++) {
            cin >> array[i];
        }

        // specifying number of students to whom we distribute chocolates
        cout << "Enter number of numOfStudents: ";
        cin >> numOfStudents;

        // displaying output
        cout << chocolateDistributionDiff(array, totalPackets, numOfStudents) << endl;
    }
}

// function to find difference of max and min of eash sub array possible with value numOfStudents
int chocolateDistributionDiff(int *array, int totalPackets, int numOfStudents) {
    sort(array, array + totalPackets);
    int min_diff = 9999, diff;
    for(int i = 0; (i+numOfStudents-1) < totalPackets ; i++) {
        diff = array[(i+numOfStudents-1)] - array[i];
        if(diff < min_diff) {
            min_diff = diff;
        }
    }
    return min_diff;
}
