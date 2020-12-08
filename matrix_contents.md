# Matrix

## Day 31

> [C++ program to traverse the matrix in spiral form](https://github.com/RajVadeghar/100DaysOfCode/blob/main/matrix/Day-31/spiralOrderTraverse.cpp)<br />

> Given a matrix of size rows*coloumns. Traverse the matrix in spiral form.

```     
Example 1:
    Input: rows = 4, coloumns = 4
            matrix[][] = {{1, 2, 3, 4},
                {5, 6, 7, 8},
                {9, 10, 11, 12},
                {13, 14, 15,16}}
    Output: 
        1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
```
![Explanation image](https://www.geeksforgeeks.org/wp-content/uploads/spiral-matrix.png)
```
Example 2:
    Input: rows = 3, coloumns = 4  
            matrix[][] = {{1, 2, 3, 4},
                {5, 6, 7, 8},
                {9, 10, 11, 12}}
    Output: 
        1 2 3 4 8 12 11 10 9 5 6 7
```
_Algorithm_ :

1. Take 4 variables rowStart, rowEnd, colStart and colEnd to keep track of variable that needs to be printed.
2. First itreate through each element of first row. And print each coloumn value of that row and increment rowStart count.
So that, next time this operation is done with 2nd row. This incrementation contiues until rowStart is less than or equal to rowEnd.
3. Then itreate through each element of last coloumn. And print each row value of that coloumn and decrement colEnd count.
So that, next time this operation is done with 2nd last coloumn. This decrementation contiues until colEnd is greater than or equal to colStart.
4. Then itreate through each element of last row. And print each coloumn value of that row and decrement rowEnd count.
So that, next time this operation is done with 2nd last row. This decrementation contiues until rowEnd is greater than or equal to rowStart.
5. Then itreate through each element of first coloumn. And print each row value of that coloumn and increment colStart count.
So that, next time this operation is done with 2nd coloumn. This incrementation contiues until colStart is less than or equal to colEnd.

<br />

## Day 32

> [Search for an element in a Matrix](https://github.com/RajVadeghar/100DaysOfCode/blob/main/matrix/Day-32/searchElemIn2Dmatrix.cpp)<br />

> C++ program to search for an element in a 2D Matrix.
>> Given a matrix of size m x n matrix and a target element. <br />
>> The matrix has the following properties: <br />
>> 1. Integers in each row are sorted from left to right. <br />
>> 2. The first integer of each row is greater than the last integer of the previous row. <br />
>> Print 1 if the target element is found in the matrix, otherwise print 0.

```     
Example 1:

Input : m = 3 , n = 4
    matrix = {
              {1, 3, 5, 7},
              {10, 11, 16, 20},
              {23, 30, 34, 60},
             }
    target = 3
Output : 1

Example 2:

Input : m = 3 , n = 4
    matrix = {
              {1, 3, 5, 7}, 
              {10, 11, 16, 20}, 
              {23, 30, 34, 60},
             }
    target = 70
Output : 0

Example 3:

Input : m = 0, n = 0
    matrix = {}
    target = 10
Output : 0

```
_Algorithm_ :

**Method 1 : (Linear search)**

Search for the element by traversing linearly in the matrix.
1. Traverse through each row, compare the target with every element in each row.
2. If target is found anywhere, return 1 and stop traversal.
This method takes O(m*n) time.


**Method 2 : (Binary search)**

As each row is sorted, we can use binary search for individual rows.

1. Iterate through each row of matrix.
2. In every row, use binary search to check if the target is present in that row.
This method takes O(m log n) time.


**Method 3 :**

1. Start from the top right corner of the matrix.(From the last element in first row)
    For that, create two variables to store the indices, 'currentRow' = 0, 'colEnd' = matrix[0].size() - 1.
2. If matrix[currentRow][colEnd] is less than target, update currentRow = currentRow + 1.
    We are moving to the next row, because all the elements in any row are less than the next row.
3. If matrix[currentRow][colEnd] is greater than target, update colEnd = colEnd - 1.
    We are moving column backward in the same row, as the elements are sorted.
4. Compare that element with target, if matrix[currentRow][colEnd] is equal to target, print true and stop execution.
5. Repeat step 2, 3, 4 until the currentRow, colEnd are in valid range i.e, until (colEnd >= 0 && currentRow <= rowEnd) where rowEnd = matrix.size() - 1

This method takes O(m+n) time.

**The code here is written for Method 3.**

<br />