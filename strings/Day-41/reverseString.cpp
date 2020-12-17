/*
    Reverse String
    Write a function that reverses a string. The input string is given as an array of characters char[].
    Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
    You may assume all the characters consist of printable ascii characters.

    Example 1:
        Input: ["h","e","l","l","o"]
        Output: ["o","l","l","e","h"]

    Example 2:
        Input: ["H","a","n","n","a","h"]
        Output: ["h","a","n","n","a","H"]

    Algorithm:
    1. Take 2 varibles i & j and declare them to i = 0, j = string length - 1(since stings index is from 0)
    2. then swap ith location element of string with jth location. (This results in swapping of 1st and last elements of string).
    3. Then increment i value and decrement j value and run 2nd statement again until i < j. 
*/
#include <string>
#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char> &str);

int main(void) {

    // Method 1 using arrays

    /* string me = "RajVadeghar";
    int len = me.length();
    for(int i = len-1; i >= 0; i--) {
        cout << me[i];
    }
    cout << endl; */

    // Method 2 using vectors

    // Specifying size
    int size;
    cin >> size;

    vector<char> str;
    for(int i = 0; i < size; i++) {
        char letter;
        cin >> letter;
        str.push_back(letter);
    }

    reverseString(str);

    for(int i = 0; i < size; i++) {
        cout << str.at(i);
    }
    cout << endl;
}

void reverseString(vector<char> &str) {
    int strLen = str.size();
    for(int i = 0, j = strLen - 1; i < j; i++, j--) {
        swap(str[i], str[j]);
    }
}