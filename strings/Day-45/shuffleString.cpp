/*
    Program to Check if a string is a valid shuffle of two distinct strings
    In the above example, we have a string array named results. 
    It contains two strings: 1XY2 and Y12X. 
    We are checking if these two strings are valid shuffle of strings first(XY) and second(12).
    Here, the program says 1XY2 is a valid shuffle of XY and 12. However, Y12X is not a valid shuffle.
    This is because Y12X has altered the order of string XY. 
    Here, Y is used before X. Hence, to be a valid shuffle, the order of string should be maintained.

    Example-1:
        Input: 
            str1 = XY
            str2 = 12
            result = 1XY2
        Output:
            1XY2 is a valid shuffle of XY and 12
    Example-2:
        Input: 
            str1 = XY
            str2 = 12
            result = Y12X
        Output:
            Y12X is not a valid shuffle of XY and 12

        Algorithm:
        1. Take 3 variables i, j, k to keep track of str1, str2, and result
        2. increment k and i if first character of result matches with first character of first string 
        3. increment k and j check if first character of result matches the first character of second string
        4. if the character doesn't match
        5. return k == length of result
*/
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

bool shuffleCheck(string str1, string str2, string result);

int main(void) {
    int testcases;
    cin >> testcases;

    while(testcases--) {
        string str1, str2, result;
        cin >> str1 >> str2 >> result;
        
        if(shuffleCheck(str1, str2, result)){
            cout << result << " is valid shuffle of " << str1 << " and " << str2 << endl;
        } else {
            cout << result << " is not a valid shuffle of " << str1 << " and " << str2 << endl;
        }
    }
}

bool shuffleCheck(string str1, string str2, string result) {
    int strLen = result.length();
    int i = 0, j = 0, k = 0;
    if(str1.length() + str2.length() != strLen) {
        return false;
    } else {
        while(k != strLen) {
            if(str1[i] == result[k]) {
                i++;
            } else if (str2[j] == result[k]) {
                j++;
            } else {
                break;
            }
            k++;
        }
        return k == strLen;
    }
}