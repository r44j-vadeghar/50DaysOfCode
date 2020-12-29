## Day 41

> [Reverse String](https://github.com/RajVadeghar/100DaysOfCode/blob/main/strings/Day-41/reverseString.cpp)<br />

> Given a matrix of size rows*coloumns. Traverse the matrix in spiral form.

```
Example 1:
    Input: ["h","e","l","l","o"]
    Output: ["o","l","l","e","h"]

Example 2:
    Input: ["H","a","n","n","a","h"]
    Output: ["h","a","n","n","a","H"]
```

_Algorithm_ :

1. Take 2 varibles i & j and declare them to i = 0, j = string length - 1(since stings index is from 0)
2. then swap ith location element of string with jth location. (This results in swapping of 1st and last elements of string).
3. Then increment i value and decrement j value and run 2nd statement again until i < j. 

<br />

## Day 42

> [Palindrome String](https://github.com/RajVadeghar/100DaysOfCode/blob/main/strings/Day-42/palindromeString.cpp)<br />

> C++ program to check whether a string is a palindrome or not. Given a string S, print 1 if the given string is palindrome, otherwise print 0.

```
Example 1:
    Input: S = "abba"
    Output: 1
    Explanation: S is a palindrome
Example 2:
    Input: S = "abc" 
    Output: 0
    Explanation: S is not a palindrome
```

_Algorithm_ - 1:
1. Traverse from beginning to half of the string using variable i = 0.
2. Check if first ith character and last ith character are same or not.
3. If any 2 characters are not same, return false.

_Algorithm_ - 2:
1. First, find the reverse of the given string using two pointer technique.
2. Check if the original string and reversed string are same or not.
<br />
I used Algorithm 1 here

<br />

## Day 43

> [A Program to check if strings are rotations of each other or not](https://github.com/RajVadeghar/100DaysOfCode/blob/main/strings/Day-43/rotateString.cpp)<br />

> C++ program to check if two given strings are rotations of  each other. Given a string str1 and a string str2. Print 1 if the str2 is the rotation of str1, print 0 if it is not the rotation.

```
Example:                 
    Input : str1 = "ABACD", str2 = "CDABA"
    Output : 1
    Explanation : 
                temp = str1 + str2 = "ABACDABACD"
                Since str2 is a substring of temp, str1 and str2 are rotations of each other.
```

_Algorithm_:
1. Create a temp string and store concatenation of str1 to str2 in temp.
2. If str2 is a substring of temp then str1 and str2 are rotations of each other.

<br />

## Day 44

> [Print all the duplicates in the input string](https://github.com/RajVadeghar/100DaysOfCode/blob/main/strings/Day-44/duplicatesInString.cpp)<br />

> C++ program to print all the duplicates and their counts in the input string .

```
Example 1:
        Input : str = "example"
        Output : e, count = 2
    Example 2:
        Input : str = "helloworld"
        Output: l, count = 3
                o, count = 2
```

_Algorithm_:
1. Create an array of 26 alphabets
2. increment array value found in string
3. if value found more than once, then it's a duplicate. Print that value

<br />

## Day 45

> [Program to Check if a string is a valid shuffle of two distinct strings](https://github.com/RajVadeghar/100DaysOfCode/blob/main/strings/Day-45/shuffleString.cpp)<br />

> In the below example, we have a string array named results. It contains two strings: 1XY2 and Y12X. We are checking if these two strings are valid shuffle of strings first(XY) and second(12). Here, the program says 1XY2 is a valid shuffle of XY and 12. However, Y12X is not a valid shuffle. This is because Y12X has altered the order of string XY. Here, Y is used before X. Hence, to be a valid shuffle, the order of string should be maintained.

```
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
```

_Algorithm_:
1. Take 3 variables i, j, k to keep track of str1, str2, and result
2. increment k and i if first character of result matches with first character of first string 
3. increment k and j check if first character of result matches the first character of second string
4. if the character doesn't match
5. return k == length of result

<br />

## Day 46

> [Count And Say Sequence](https://github.com/RajVadeghar/100DaysOfCode/blob/main/strings/Day-46/countAndSay.cpp)<br />

> Given a positive integer n, return the nth term of the count-and-say sequence. The count-and-say sequence is a sequence of digit strings defined by the recursive formula:
>> countAndSay(1) = "1"
>> countAndSay(n) is the way you would "say" the digit string from countAndSay(n-1), which is then converted into a different digit string.
>> To determine how you "say" a digit string, split it into the minimal number of groups so that each group is a contiguous section all of the same character. 
>> Then for each group, say the number of characters, then say the character. 
>> To convert the saying into a digit string, replace the counts with a number and concatenate every saying.

```
Example 1:
    Input: n = 1
    Output: "1"
    Explanation: This is the base case.
Example 2:
    Input: n = 4
    Output: "1211"
    Explanation:
        countAndSay(1) = "1"
        countAndSay(2) = say "1" = one 1 = "11"
        countAndSay(3) = say "11" = two 1's = "21"
        countAndSay(4) = say "21" = one 2 + one 1 = "12" + "11" = "1211"
```

<br />

## Day 47

> [Longest Palindrome in a String](https://github.com/RajVadeghar/100DaysOfCode/blob/main/strings/Day-47/longestPalindromeSubString.cpp)<br />

> C++ program to find longest palindrome substring in a string Given a string S, find the longest palindromic substring in S.
>> Substring of string S: S[ i . . . . j ] where 0 ≤ i ≤ j < len(S).
>> Palindrome string: A string which reads the same backwards. 
>> More formally, S is palindrome if reverse(S) = S. 
>> Incase of conflict, return the substring which occurs first (with the least starting index).

```
Example:
    Input: 1, aaaabbaa
    Output: aabbaa
    
    Explanation:
        Testcase 1: The longest palindrome string present in the given string is "aabbaa".
```

<br />

## Day 48

> [Subsequences of String](https://github.com/RajVadeghar/100DaysOfCode/blob/main/strings/Day-48/subseqOfString.cpp)<br />

> C++ program to print all the subsequences of a string. Given a string, we have to find out all subsequences of it. 
>> A String is a subsequence of a given String, that is generated by deleting some character of a given string without changing its order.

```
Example 1: 
    Input : abc
    Output : a, b, c, ab, bc, ac, abc
Example 2:
    Input : aaa
    Output : a, aa, aaa
Example 3:
    Input : abcd
    Output : abcd abc, abd, ab, acd, ac, ad, a, bcd, bc, bd, b, cd, c, d
```
_Algorithm_: 
1. Iterate over the entire String.
2. Iterate from the end of string in order to generate different substrings, add the subtring to the list.
3. Drop kth character from the substring obtained from above to generate different subsequence.
4. if the subsequence is not in the list then recur.

<br />


## Day 49

> [Split the binary string into substrings with equal number of 0s and 1s](https://github.com/RajVadeghar/100DaysOfCode/blob/main/strings/Day-49/splitBinaryString.cpp)<br />

> C++ program to Split the binary string into substrings with equal number of 0s and 1s
>> Given a binary string str of length N, the task is to find the maximum count of substrings str can be divided into such that all the substrings are balanced i.e. 
>> they have equal number of 0s and 1s. 
>> If it is not possible to split str satisfying the conditions then print -1.

```
Example 1:
    Input: str = “0100110101”
    Output: 4
    The required substrings are “01”, “0011”, “01” and “01”.
Example 2:
    Input: str = “0111100010”
    Output: 3
```
_Algorithm_: 
1. Initialize max_count = 0 and traverse the string character by character and keep track of the number of 0s and 1s so far, whenever the count of 0s and 1s become equal increment the max_count. 
2. If the count of 0s and 1s in the original string is not equal then print -1 else print the value of count after the traversal of the complete string.
Time complexity : O(N) where N is the length of string

<br />

## Day 50

> [Split the binary string into substrings with equal number of 0s and 1s](https://github.com/RajVadeghar/100DaysOfCode/blob/main/strings/Day-50/mobileKeypadSeq.cpp)<br />

> C++ program to convert a sentence into its equivalent mobile numeric keypad sequence. Given a sentence in the form of a string, convert it into its equivalent mobile numeric keypad sequence.

```
                        | ABC | DEF
                    1  |  2  |  3
                _____|_____|____
                        |     |
                    GHI | JKL | MNO
                    4  |  5  |  6
                _____|_____|____
                        |     |
                PQRS | TUV | WXYZ
                    7  |  8  |  9
                _____|_____|____
                        |     |    
                    *  |  0  |  #
                        |     |  
```
> For obtaining a number, we need to press a number corresponding to that character for number of times equal to position of the character. For example, for character C, we press number 2 three times and accordingly.

```
Example 1:
    Input : GEEKSFORGEEKS
    Output : 4333355777733366677743333557777
Example 2:
    Input : HELLO WORLD
    Output : 4433555555666096667775553
```

<br />