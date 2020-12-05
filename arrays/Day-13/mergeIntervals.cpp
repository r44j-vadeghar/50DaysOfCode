// C++ program to merge the overlapping intervals.
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Functions used in this code
void printIntervals(vector<vector<int> >& intervals);

class Solution {
    public:
    // Specifying public function merge all the overlapping intervals using class
    // Returns a vector containing all the merged intervals along with remaining non-overlapping intervals
    vector<vector<int> > merge(vector<vector<int> >& intervals) {
        vector<vector<int> > result;
        sort(intervals.begin(), intervals.end());
        for (int i = 0; i < intervals.size(); i++) {
            if (result.size() == 0) {
                result.push_back(intervals.at(i));
            }
            else if (result.back()[1] >= intervals[i][0]) {
                result.back()[1] = max(intervals[i][1], result.back()[1]);
            }
            else {
                result.push_back(intervals.at(i));
            }
        }
        return result;
    }
};

// Driver function
int main(void) {
    // Specifying size for array
    int size;
    cout << "Enter number of intervals: ";
    cin >> size;

    // declaring vector intervals
    vector<vector<int> > intervals(size);

    // initialising elements into the vector array
    for (int i = 0; i < size; i++)
    {
        intervals[i] = vector<int> (2);
        cout << "Interval " << i + 1 << " : ";
        cin >> intervals[i][0] >> intervals[i][1];
    }

    // diaplay intervals before merge
    cout << "before merge: " << endl;
    printIntervals(intervals);

    // Creating object obj for class Solution
    Solution obj;
    // Calling function of Solution class anter storing return value in vector result
    vector<vector<int> > result = obj.merge(intervals);

    // diaplay intervals after merge
    cout << "After merge: " << endl;
    printIntervals(result);
}

// function used to display intervals
void printIntervals(vector<vector<int> >& intervals) {
    for (int i = 0; i < intervals.size(); i++) {
        cout << "[" << intervals[i][0] << ", " << intervals[i][1] << "]";
    }
    cout << endl;
}