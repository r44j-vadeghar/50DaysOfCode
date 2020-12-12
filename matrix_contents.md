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
    Explanation: 
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


## Day 33

> [Row with Maximum number of 1s in a Boolean Matrix.](https://github.com/RajVadeghar/100DaysOfCode/blob/main/matrix/Day-33/rowWithMax1s.cpp)<br />

> C++ program to find the row with maximum number of 1s. Given a boolean 2D array, where each row is sorted. Find the row with the maximum number of 1s. Print the index of the row with maximum number of 1s. If there is no such row, print -1.

```
Example:
        Input matrix : rows = 4, columns = 4
                        0 1 1 1
                        0 0 1 1
                        1 1 1 1  // this row has maximum 1s
                        0 0 0 0
        Output: 2 (0 based indexing) 
```
_Algorithm_ :
1. Take 2 variables, row = 0, col = 0 to traverse through the matrix column wise.
2. Start from the first column, and traverse through all columns.
    For the first column, keep the row = 0 and vary col from 0 to columns, and check if any matrix[row][col] is 1.
3. If there is a 1 in any column, return the row number i.e 'row'.
    As the rows are sorted, the row in which 1 occurs in the starting columns, that row has max number of 1s. 
4. If there are no 1s in the matrix, return -1.

_Another Approach_ : 
By counting the number of 1s in each row, and maximum of all the counts is returned.
Both the methods take O(rows*columns) time in worst case.

<br />

## Day 34

> [Print the matrix elements in Sorted Order](https://github.com/RajVadeghar/100DaysOfCode/blob/main/matrix/Day-34/sortMatrix.cpp)<br />

> C++ program to print the elements of a matrix in sorted order. Given an rows x columns matrix, where every row and column is sorted in non-decreasing order. Print all elements of matrix in sorted order.

```
Example 1 :

    Input : rows = 4, columns = 4
            matrix = {{10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {27, 29, 37, 48},
                    {32, 33, 39 50}}
    Output : 10 15 20 25 27 29 30 32 33 35 37 39 40 45 48 50

Example 2 :

    Input : rows = 3, columns = 3
            matrix = {{1, 3, 4},
                    {2, 6, 7},
                    {5, 8, 9}}
    Output : 1 2 3 4 5 6 7 8 9 

```
_Algorithm_ :
1. Create a output array of size rows x columns.
2. Traverse the matrix from start to end and insert all the elements in output array.
3. Sort and print the output array.

_Complexity Analysis_ :
1. Time Complexity : O(R*C log (R*C))).
2. Space Complexity : O(R*C), since the output array is of size R*C.

<br />

## Day 35

> [Median in a row-wise sorted Matrix](https://github.com/RajVadeghar/100DaysOfCode/blob/main/matrix/Day-35/median.cpp)<br />

>  C++ program to find the median of a matrix. Given an unsorted matrix of size R x C. Find the median of the matrix.

```
Example 1 :
    Input : R = 3, C = 3
            matrix = {{1, 3, 5}, 
                    {2, 6, 9}, 
                    {3, 6, 9}}
    Output: 5
    Explanation : Sorting matrix elements gives us {1,2,3,3,5,6,6,9,9}. Hence, 5 is median.

Example 2 :
    Input:
    R = 3, C = 1
    matrix = {{1}, {2}, {3}}
    Output: 2

Example 3 :
    Input : R = 2, C = 2
            matrix = {{6, 5}, 
                    {1, 3}}
    Output : 4
```
_Algorithm_ :
1. Create a vector 'mergedMatrix' of size R x C.
2. Traverse through the given matrix and add all elements to the vector 'mergedMatrix'.
3. Sort the 'mergedMatrix' vector.
4. If the vector has odd number of elements, then median is the middle element. If the vector has even number of elements, then median is the average of middle 2 elements.

<br />

## Day 36

> [Kth element in Matrix](https://github.com/RajVadeghar/100DaysOfCode/blob/main/matrix/Day-36/kthSmallest.cpp)<br />

> Given a N x N matrix, where every row and column is sorted in non-decreasing order. Find the kth smallest element in the matrix.

```
Example 1:
    Input: size = 4
            matrix[][] =     {{16, 28, 60, 64},
                            {22, 41, 63, 91},
                            {27, 50, 87, 93},
                            {36, 78, 87, 94 }}
            K = 3
    Output: 27
    Explanation: 27 is the 3rd smallest element.

Example 2:
    Input: size = 4
            matrix[][] =     {{10, 20, 30, 40}
                            {15, 25, 35, 45}
                            {24, 29, 37, 48}
                            {32, 33, 39, 50}}
            K = 7
    Output: 30
    Explanation: 30 is the 7th smallest element.
```
_Algorithm_ :
1. Create a vector 'output' of size size * size.
2. Traverse through the given matrix and add all elements to the vector 'output'.
3. Sort the 'output' vector.
4. return kth element.

<br />