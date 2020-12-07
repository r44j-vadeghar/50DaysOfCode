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