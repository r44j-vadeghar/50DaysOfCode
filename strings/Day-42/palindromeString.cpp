/*
    C++ program to check whether a string is a palindrome or not.
    Given a string S, print 1 if the given string is palindrome, otherwise print 0.

    Example 1:
        Input: S = "abba"
        Output: 1
        Explanation: S is a palindrome
    Example 2:
        Input: S = "abc" 
        Output: 0
        Explanation: S is not a palindrome

    Algorithm - 1:
    1. Traverse from beginning to half of the string using variable i = 0.
    2. Check if first ith character and last ith character are same or not.
    3. If any 2 characters are not same, return false.

    Algorithm - 2:
    1. First, find the reverse of the given string using two pointer technique.
    2. Check if the original string and reversed string are same or not.

    I used Algorithm 1 here
*/
#include <iostream>
#include <string>
using namespace std;

class Solution{
public:
	int isPlaindrome(string S)
	{
        int strLen = S.length();
        int i = 0, j = strLen - 1;

        while(i < j) {
            if(S[i] == S[j]) {
                i++;
                j--;
            }
            else
                break;
        }

        return i == strLen/2;
	}
};

int main() {
    int testcases;
    cin >> testcases;

    while(testcases--) {
        string str;
        cin >> str;

        Solution obj;
        cout << obj.isPlaindrome(str) << endl;
    }
    return 0;
}