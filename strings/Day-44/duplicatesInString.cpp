/*
    C++ program to print all the duplicates and their counts in the input string .

    Example 1:
        Input : str = "example"
        Output : e, count = 2
    Example 2:
        Input : str = "helloworld"
        Output: l, count = 3
                o, count = 2

    Algorithm :
    1. Create an array of 26 alphabets
    2. increment array value found in string
    3. if value found more than once, then it's a duplicate. Print that value
*/
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void printDuplicates(string str);

int main(void) {
    int testcases;
    cin >> testcases;
    while(testcases--) {
        string str;
        cin >> str;

        printDuplicates(str);
    }
}

void printDuplicates(string str) {
    int strLen = str.length();
    int arr[26];
    for(int i = 0; i < 26; i++) {
        arr[i] = 0;
    }

    for(int i = 0; i < strLen; i++) {
        arr[int(str[i]) - 97]++;
    }
    
    for(int i = 0; i < 26; i++) {
        if (arr[i] > 1) {
            cout << static_cast<char>(i + 97) << ", count = " << arr[i] << endl;
        }
    }
}