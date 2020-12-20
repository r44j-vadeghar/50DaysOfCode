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
<!-- ![day-41 image](https://github.com/RajVadeghar/100DaysOfCode/blob/main/strings/images/Day-41.png) -->
<img src="https://github.com/RajVadeghar/100DaysOfCode/blob/main/strings/images/Day-41.png" alt="day-41 image" width="40%" height="40%">

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
<!-- ![day-42 image](https://github.com/RajVadeghar/100DaysOfCode/blob/main/strings/images/day-42.png) -->
<img src="https://github.com/RajVadeghar/100DaysOfCode/blob/main/strings/images/day-42.png" alt="day-42 image" width="40%" height="40%">

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
<!-- ![day-43 image](https://github.com/RajVadeghar/100DaysOfCode/blob/main/strings/images/day-43.png){:height="50%" width="50 -->
<img src="https://github.com/RajVadeghar/100DaysOfCode/blob/main/strings/images/day-43.png" alt="day-43 image" width="40%" height="40%">

_Algorithm_:
1. Create a temp string and store concatenation of str1 to str2 in temp.
2. If str2 is a substring of temp then str1 and str2 are rotations of each other.

<br />