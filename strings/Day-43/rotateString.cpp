/*
    C++ program to check if two given strings are rotations of  each other.
    Given a string str1 and a string str2.
    Print 1 if the str2 is the rotation of str1, print 0 if it is not the rotation.

    Example:                 
        Input : str1 = "ABACD", str2 = "CDABA"
        Output : 1
        Explanation : 
        temp = str1 + str2 = "ABACDABACD"
        Since str2 is a substring of temp, str1 and str2 are rotations of each other.
        
    Algorithm :
    1. Create a temp string and store concatenation of str1 to str2 in temp.
    2. If str2 is a substring of temp then str1 and str2 are rotations of each other.
*/
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

bool areRotations(string str1, string str2);

int main(void) {
    int testcases;
    cin >> testcases;
    while(testcases--) {
        string str1, str2;
        cin >> str1 >> str2;

        if(areRotations(str1, str2)) {
            cout << "Strings are rotations of each other";
        } else {
            cout << "Strings are not rotations of each other";
        }

    }
}

bool areRotations(string str1, string str2) {
    string temp = str1 + str1;

    // temp.find(str2) returns index of starting point of str2 in temp num if str2 found
    // if str2 not found in temp... temp.find(str2) returns string::npos
    // npos is a static member constant value with the greatest possible value for an element of type size_t.
    // size_t is one of the unsigned fundamental integer types
    if(temp.find(str2) != string::npos) {
        return true;
    }
    return false;
}