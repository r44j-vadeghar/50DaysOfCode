## Day 41

> [Reverse String](https://github.com/RajVadeghar/100DaysOfCode/blob/main/strings/Day-41/reverseString.cpp)<br />

> Given a matrix of size rows*coloumns. Traverse the matrix in spiral form.

![day-42 image](https://github.com/RajVadeghar/100DaysOfCode/blob/main/strings/images/Day-41.png)
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