# ***ARRAYS***
## Day 1
> [C++ program to reverse an array](https://github.com/RajVadeghar/100DaysOfCode/blob/main/arrays/Day-1/reverseArray.cpp)
```
Example 1:
Input   : array[] = {1, 2, 3}
Output  : array[] = {3, 2, 1}

Example 2:
Input   :  array[] = {4, 5, 1, 2}
Output  : array[] = {2, 1, 5, 4}
```
<br />

## Day 2
> [C++ program to sort array using MERGE SORT](https://github.com/RajVadeghar/100DaysOfCode/blob/main/arrays/Day-2/mergesort.cpp)
```
Example:
Input   : array[] = {4, 5, 1, 7}
Output  : array[] = {1, 4, 5, 7}
```
<br />

## Day 3
> [C++ program to find the minimum and maximum elements in an array.](https://github.com/RajVadeghar/100DaysOfCode/blob/main/arrays/Day-3/minMax.cpp)
```
Example:
Input   : array[] = {4, 5, 10, 25, 2, 3}
Ouput   : min = 2, max = 25
```
> [C++ program to find the kth smallest element in an array.](https://github.com/RajVadeghar/100DaysOfCode/blob/main/arrays/Day-3/kthSmallest.cpp)
```
Example:
Input   : array[] = {7, 10, 4, 3, 20, 15}, k = 2
Output  : 7
Explanation : k is 2, so 2nd smallest element is 7
```
<br />

## Day 4
> [C++ program to sort the array of 0s, 1s, 2s in ascending order without using any sorting algorithm.](https://github.com/RajVadeghar/100DaysOfCode/blob/main/arrays/Day-4/sorting.cpp) <br />
> Given an array containing 0s, 1s, and 2s; you need to sort the array in ascending order.
```
Example:
Input   : array[] = {2, 1, 1, 0, 0, 2, 0, 1}
Output  : array[] = {0, 0, 0, 1, 1, 1, 2, 2}
```
<br />

## Day 5
> [C++ program to move all the negative numbers to the beginning of the array.](https://github.com/RajVadeghar/100DaysOfCode/blob/main/arrays/Day-5/rearrange.cpp) <br />
> An array contains both positive and negative numbers in random order.Rearrange the array elements so that all negative numbers appear before all positive numbers.
```
Example:
Input   : array[] = {1, -5, -6, 10, 25, 33, -20}
Output  : array[] = {-20, -5, -6, 10, 25, 33, 1}

Note : Order of elements is not important here. 
```
<br />

## Day 6
> [C++ program to find union count of two arrays](https://github.com/RajVadeghar/100DaysOfCode/blob/main/arrays/Day-6/union.cpp)
```
Example:
Input   : array[] = {1, 2, 3, 4, 5}, array[] = {1, 2, 7}
Output  : 6
```
<br />

## Day 7
> [C++ program to rotate an array by one element each](https://github.com/RajVadeghar/100DaysOfCode/blob/main/arrays/Day-7/rotate.cpp)
```
Example:
Input   : array[] = {1, 2, 3, 4, 5}
Output  : array[] = {5, 1, 2, 3, 4}
```
<br />

## Day 8
> [C++ program to minimize the maximum difference between the heights](https://github.com/RajVadeghar/100DaysOfCode/blob/main/arrays/Day-8/diff.cpp)<br />

> Given an array arr[] denoting heights of N towers and a positive integer K. You have to modify the height of each tower either by increasing or decreasing them by K only once. After modifying, height should be a non-negative integer. Find out what could be the possible minimum difference of the height of shortest and longest towers after.
```
Example 1:
Input: K = 2, N = 4, Arr[] = {1, 5, 8, 10}
Output: 5
Explanation: The array can be modified as {3, 3, 6, 8}.
The difference between the largest and the smallest is 8-3 = 5.

Example 2:
Input: K = 3, N = 5, Arr[] = {3, 9, 12, 16, 20}
Output: 11
Explanation: The array can be modified as {6, 12, 9, 13, 17}.
The difference between the largest and the smallest is 17-6 = 11.
```
<br />

## Day 9
> [C++ program to find minimum number of jumps reqired to reach end of array](https://github.com/RajVadeghar/100DaysOfCode/blob/main/arrays/Day-9/NoOfJumps.cpp)
```
Example-1:
Input   : array[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9}
Output  : 3

Example-2:
Input   : array[] = {1, 4, 3, 2, 6, 7}
Output  : 2
```
<br />

## Day 10
> [C++ program to find duplicates in an array](https://github.com/RajVadeghar/100DaysOfCode/blob/main/arrays/Day-10/duplicate.cpp)<br />

> Given an array of size n + 1, which contains n distinct elements and 1 element is repeated. The task is to find out the repeated element.
```
Example-1:
Input   : array[] = {1, 3, 4, 2, 2}
Output  : 2

Example-2:
Input   : array[] = {3, 1, 3, 4, 2}
Output  : 3

Example-3:
Input   : array[] = {1, 1}
Output  : 1
```
<br />

## Day 11
> [C++ program to merge two sorted arrays without using extra space](https://github.com/RajVadeghar/100DaysOfCode/blob/main/arrays/Day-11/merge.cpp)<br />

> Given two sorted arrays arr1[], arr2[] of size1, size2. Each array is sorted in non-decreasing order. Merge the two arrays into one sorted array in non-decreasing order without using any extra space.

```
Example 1:

Input:
        size1 = 4, size2 = 5
        arr1[] = {1, 3, 5, 7}
        arr2[] = {0, 2, 6, 8, 9}

Output: 0 1 2 3 5 6 7 8 9

Explanation: Since you can't use any extra space, modify the given arrays to form 
        arr1[] = {0, 1, 2, 3}
        arr2[] = {5, 6, 7, 8, 9}

Example 2:

Input:
        size1 = 2, size2 = 3
        arr1[] = {10, 12}
        arr2[] = {5, 18, 20}

Output: 5 10 12 18 20

Explanation: Since you can't use any extra space, modify the given arrays to form 
        arr1[] = {5, 10}
        arr2[] = {12, 18, 20}
```
<br />

## Day 12
> [C++ program to find largest sum contiguous sub array](https://github.com/RajVadeghar/100DaysOfCode/blob/main/arrays/Day-12/kadanes.cpp)<br />

> Given an array array of N integers. Find the contiguous sub-array with maximum sum.

```
Example 1:

Input: 
        N = 5
        arr[] = {1,2,3,-2,5}
Output: 9

Explanation: Max subarray sum is 9 of elements (1, 2, 3, -2, 5) which is a contiguous subarray.

Example 2:

Input:
        N = 4
        arr[] = {-1,-2,-3,-4}
Output: -1

Explanation: Max subarray sum is -1 of element (-1)
```
<br />

## Day 13
> [C++ program to merge the overlapping intervals](https://github.com/RajVadeghar/100DaysOfCode/blob/main/arrays/Day-13/mergeIntervals.cpp)<br />

> Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

```
Example 1:

Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].

Example 2:

Input: intervals = [[1,4],[4,5]]
Output: [[1,5]]
Explanation: Intervals [1,4] and [4,5] are considered overlapping.
```
<br />

## Day 14
> [C++ program to find best time to buy and sell stock](https://github.com/RajVadeghar/100DaysOfCode/blob/main/arrays/Day-14/buyAndSellStock.cpp)<br />

> Say you have an array for which the ith element is the price of a given stock on day i. If you were only permitted to complete at most one transaction (i.e., buy one and sell one share of the stock), design an algorithm to find the maximum profit. Note that you cannot sell a stock before you buy one.

```
Example 1:

        Input: [7,1,5,3,6,4]
        Output: 5
        Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
                        Not 7-1 = 6, as selling price needs to be larger than buying price.
Example 2:

        Input: [7,6,4,3,1]
        Output: 0
        Explanation: In this case, no transaction is done, i.e. max profit = 0.
```
<br />

## Day 15
> [C++ program to find common elements of given 3 arrays by user](https://github.com/RajVadeghar/100DaysOfCode/blob/main/arrays/Day-15/commonOf3Arrays.cpp)<br />

> Given three arrays sorted in increasing order. Find the elements that are common in all three arrays.

> **Note**: can you take care of the duplicates without using any additional Data Structure?

```
Example:

Input:
        n1 = 6; A = {1, 5, 10, 20, 40, 80}
        n2 = 5; B = {6, 7, 20, 80, 100}
        n3 = 8; C = {3, 4, 15, 20, 30, 70, 80, 120}
Output: 20 80
Explanation: 20 and 80 are the only common elements in A, B and C.
```
<br />

## Day 16
> [C++ program to find the Inversion Count in the array.](https://github.com/RajVadeghar/100DaysOfCode/blob/main/arrays/Day-16/inversionCount.cpp)<br />

> Given an array of integers. Find the Inversion Count in the array. 

> Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then the inversion count is 0. If an array is sorted in the reverse order then the inversion count is the maximum. Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.

```
Example 1:

        Input: N = 5, arr[] = {2, 4, 1, 3, 5}
        Output: 3
        Explanation: The sequence 2, 4, 1, 3, 5 has three inversions (2, 1), (4, 1), (4, 3).

Example 2:

        Input: N = 5, arr[] = {2, 3, 4, 5, 6}
        Output: 0
        Explanation: As the sequence is already sorted so there is no inversion count.

Example 3:

        Input: N = 3, arr[] = {10, 10, 10}
        Output: 0
        Explanation: As all the elements of array are same, so there is no inversion count.

```
<br />

## Day 17
> [C++ program to find count pairs with given sum](https://github.com/RajVadeghar/100DaysOfCode/blob/main/arrays/Day-17/getPairsCount.cpp)<br />

> Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K.

```
Example 1:

        Input   : N = 4, K = 6, arr[] = {1, 5, 7, 1}
        Output  : 2
        Explanation: arr[0] + arr[1] = 1 + 5 = 6 and arr[1] + arr[3] = 5 + 1 = 6.


Example 2:

        Input   : N = 4, X = 2, arr[] = {1, 1, 1, 1}
        Output  : 6
        Explanation: Each 1 will produce sum 2 with any 1.
```
<br />

## Day 18
> [C++ program to find difference of max and min of eash sub array possible with value numOfStudents](https://github.com/RajVadeghar/100DaysOfCode/blob/main/arrays/Day-18/chocolateDistribution.cpp)<br />

> Given an array A of positive integers of size N, where each value represents number of chocolates in a packet. Each packet can have variable number of chocolates. There are M students, the task is to distribute chocolate packets such that :<br />

> 1. Each student gets one packet. <br />

> 2. The difference between the number of chocolates given to the students having packet with maximum chocolates and student having packet with minimum chocolates is minimum.

```
Example 1:

        Input : arr[] = {7, 3, 2, 4, 9, 12, 56} , m = 3 
        Output: Minimum Difference is 2 
        Explanation:
        We have seven packets of chocolates and we need to pick three packets for 3 students 
        If we pick 2, 3 and 4, we get the minimum difference between maximum and minimum packet sizes.

Example 2:

        Input : arr[] = {3, 4, 1, 9, 56, 7, 9, 12} , m = 5 
        Output: Minimum Difference is 6 
        Explanation:
        The set goes like 3,4,7,9,9 and the output is 9-3 = 6

Example 3:

        Input : arr[] = {12, 4, 7, 9, 2, 23, 25, 41, 30, 40, 28, 42, 30, 44, 48, 43, 50} , m = 7 
        Output: Minimum Difference is 10 
        Explanation:
        We need to pick 7 packets. 
        We pick 40, 41, 42, 44, 48, 43 and 50 to minimize difference between maximum and minimum.
```
> **Approach :** <br />

>    We first sort the array arr[0..n-1], then find the subarray of size m with the minimum difference between the last and first elements.
<br />


## Day 19
> [C++ program to find smallest sub array count with greatest sum](https://github.com/RajVadeghar/100DaysOfCode/blob/main/arrays/Day-19/smallestSubArrayWithGreatestSum.cpp)<br />

> Given an array of integers (A[])  and a number x, find the smallest subarray with sum greater than the given value. <br />

> **Note:** There is at least one subarray with sum greater than x

```
Example 1:
        input: A[] = {1, 4, 45, 6, 0, 19}, x  =  51
        Output: 3
        Explanation: Minimum length subarray is {4, 45, 6}

Example 2:
        input: A[] = {1, 10, 5, 2, 7}, x  = 9
        Output: 1
        Explanation: Minimum length subarray is {10}
```
<br />

## Day 20
> [C++ program to find whether an array is subset of another array](https://github.com/RajVadeghar/100DaysOfCode/tree/main/arrays/Day-20)<br />

> Given two arrays: arr1[0..m-1] of size m and arr2[0..n-1] of size n. Task is to check whether arr2[] is a subset of arr1[] or not. Both the arrays can be both unsorted or sorted. It may be assumed that elements in both array are distinct.<br />

- Print "Yes"(without quotes) if arr2 is subset of arr1.
- Print "No"(without quotes) if arr2 is not subset of arr1.

```
Example 1: 

        Input : arr1[] = {11, 1, 13, 21, 3, 7}
                arr2[] = {11, 3, 7, 1} 
        Output: Yes

Example 2:

        Input : arr1[] = {1, 2, 3, 4, 5, 6}
                arr2[] = {1, 2, 4} 
        Output: Yes

Example 3:

        Input : arr1[] = {10, 5, 2, 23, 19}
                arr2[] = {19, 5, 3} 
        Output: No
```
<br />

## Day 21
> [C++ program to find whether the elements in the given array are palindrome or not](https://github.com/RajVadeghar/100DaysOfCode/blob/main/arrays/Day-21/palindromeArray.cpp)<br />

> Given a Integer array A[] of n elements. Your task is to complete the function PalinArray. Which will return 1 if all the elements of the Array are palindrome otherwise it will return 0.

```
Example:
        Input: testcases - 2, 
                testcase 1 : arraysize - 5, arr[] = 111 222 333 444 555
                testcase 2 : arraysize - 3, arr[] = 121 131 20

        Output:
                testcase 1 : 1
                testcase 2 : 0

        Explanation:
                For First test case.
                n=5;
                A[0] = 111  //which is a palindrome number.
                A[1] = 222  //which is a palindrome number.
                A[2] = 333  //which is a palindrome number.
                A[3] = 444  //which is a palindrome number.
                A[4] = 555  //which is a palindrome number.
                As all numbers are palindrome so This will return 1.
```
<br />

## Day 22
> [C++ program to find the minimum number of swaps required to bring all the numbers less than or equal to k together](https://github.com/RajVadeghar/100DaysOfCode/blob/main/arrays/Day-22/minNumOfSwaps.cpp)<br />

> Given an array of n positive integers and a number k. Find the minimum number of swaps required to bring all the numbers less than or equal to k together.

```
Example:
        Input
                testcases : 2
                size : 5
                array[] : {2, 1, 5, 6, 3}
                k : 3
                size : 7
                array[] : {2, 7, 9, 5, 8, 7, 4}
                k : 6
        Output
                No of swaps required : 1
                No of swaps required : 2
        Explanation:
                1. To bring elements 2, 1, 3 together, swap element '5' with '3' such that final array will be- arr[] = {2, 1, 3, 6, 5}
                2. To bring elements 2, 5, 4 together, swap element 7 with 5 & 9 with 4 such that the final array will be {2,5,4,7,8,7,9}   
```
<br />

## Day 23
> [C++ program to find the median of an array](https://github.com/RajVadeghar/100DaysOfCode/blob/main/arrays/Day-23/median.cpp)<br />

> Given an array arr[] of N integers, calculate the median.

```
Example 1:

        Input: N = 5, arr[] = 90 100 78 89 67
        Output: 89
        Explanation: After sorting the array middle element is the median 

Example 2:

        Input: N = 4, arr[] = 56 67 30 79
        Output: 61
        Explanation: In case of even number of elements average of two middle elements is the median
```
<br />

## Day 24
> [C++ program to calculate the median of two sorted arrays of same size](https://github.com/RajVadeghar/100DaysOfCode/blob/main/arrays/Day-24/medianOfSorted.cpp)<br />

> There are 2 sorted arrays A and B of size n each. Write an algorithm to find the median of the array obtained after merging the above 2 arrays(i.e. array of length 2n).

```
Example 1: 
    Input :
        ar1[] = {1, 12, 15, 26, 38}
        ar2[] = {2, 13, 17, 30, 45}
    Output : 16

Example 2:
    Input :
        ar1[] = {1, 2, 3, 6}
        ar2[] = {4, 6, 8, 10}
    Output : 5
```
<br />

## Day 25

75 more days to go...:wink: 

> [C++ program to calculate the median of two sorted arrays of different size](https://github.com/RajVadeghar/100DaysOfCode/blob/main/arrays/Day-25/medianOfSortedDiffSize.cpp)<br />

```
Example 1:

        Input: ar1[] = {-5, 3, 6, 12, 15}
                ar2[] = {-12, -10, -6, -3, 4, 10}
        Output : The median is 3.
        Explanation : The merged array is : ar3[] = {-12, -10, -6, -5 , -3, 3, 4, 6, 10, 12, 15},
                        So the median of the merged array is 3.

Example 2:

        Input: ar1[] = {2, 3, 5, 8}
                ar2[] = {10, 12, 14, 16, 18, 20}
        Output : The median is 11.
        Explanation : The merged array is : ar3[] = {2, 3, 5, 8, 10, 12, 14, 16, 18, 20}
                if the number of the elements are even, so there are two middle elements, take the average between the two : (10 + 12) / 2 = 11.      
```
_Algorithm_ : 
* Create an array "mergeArray[]" of length (size1 + size2), if size1 and size2 are the lengths of given input arrays, say "arr1[]" and "arr2[]".
* Simultaneously traverse through array1[] and array2[].
Pick smaller of current elements in arr1[] and arr2[], copy this smaller element to next position in mergeArray[] and move ahead in mergeArray[] and the array whose element is picked.
* If there are remaining elements in arr1[] or arr2[], copy them also in mergeArray[].
* If there are odd number of elements in mergeArray[], then print the value of "mergeArray[size / 2]". Which gives middle element of array
If there are even number of elements in mergeArray[], then median is the average of two middle elements, i.e, (mergeArray[size / 2] + mergeArray[(size / 2) - 1]) / 2.
<br />

## Day 26
> [C++ program to put positive and negative elements alternatively in sequence](https://github.com/RajVadeghar/100DaysOfCode/blob/main/arrays/Day-26/alternatePos%26Neg.cpp)<br />

> Given an array of positive and negative numbers, arrange them in an alternate fashion such that every positive number is followed by negative and vice-versa.
>>    Number of positive and negative numbers need not be equal. 
>>    If there are more positive numbers they appear at the end of the array. 
>>    If there are more negative numbers, they too appear in the end of the array.

```     
Example 1 :

        Input:  arr[] = {1, 2, 3, -4, -1, 4}
        Output: arr[] = {-4, 1, -1, 2, 3, 4}

Example 2 :

        Input:  arr[] = {-5, -2, 5, 2, 4, 7, 1, 8, 0, -8}
        output: arr[] = {-5, 5, -2, 2, -8, 4, 7, 1, 8, 0} 
```
_Algorithm_ : 
* count number of positive elements(posCount) and negative elements(negCount). Create pos array of posCount size to store positive elements and neg array of negCount size to store negative elements.
* then merge them into main array like at positions that are even and 0th position too... store neg elements one by one until index value(j) reaches to negCount. After reaching negCount, we can break and store positive elements at other indices of array.
And positions that are odd... store pos elements one by one until index value(i) reaches to posCount. After reaching posCount, we can break and store negative elements at other indices of array.
* Like this we can get alternating positive and negative elements into the array as per sequence.
<br />

## Day 27
> [C++ program to find the number of pairs in an array with given sum](https://github.com/RajVadeghar/100DaysOfCode/blob/main/arrays/Day-27/countOfPairsWithSum.cpp)<br />

>  Given an array of integers, and a number ‘sum’. Find the number of pairs of integers in the array whose sum is equal to ‘sum’.

```     
Example 1:
        Input  :  arr[] = {1, 5, 7, -1}, sum = 6
        Output :  2
        Pairs with sum 6 are (1, 5) and (7, -1)

Example 2:
        Input  :  arr[] = {1, 5, 7, -1, 5}, sum = 6
        Output :  3
        Pairs with sum 6 are (1, 5), (7, -1) & (1, 5)         

Example 3:
        Input  :  arr[] = {1, 1, 1, 1}, sum = 2
        Output :  6
        There are 3! pairs with sum 2.

Example 4:
        Input  :  arr[] = {10, 12, 10, 15, -1, 7, 6, 5, 4, 2, 1, 1, 1}, sum = 11
        Output :  9
```
_Algorithm_ :
        
* Brute-Force : (time complexity - O(n square))
    * A simple solution is be traverse each element and check if there’s another number in the array which can be added to it to give sum. But the time complexity is O(n^2). And commented as method 1 in code. Check out

* Another efficient approach : (time complexity - O(n))
    * We used unordered maps here, if anyone has no idea about them... Refer to
    [this link](https://www.youtube.com/watch?v=oGqjEx6hrI8)
    * Create a map to store keys of each number in the array with value declared to 1 for every key. (Single traversal is required)
    * In the next traversal, for every element check if it can be combined with any other element (other than itself!) to give the desired sum. 
    Increment the counter accordingly.
    * After completion of second traversal, we’d have twice the required value stored in counter because every pair is counted two times. 
    Hence divide count by 2 and return.
    * Here time complexity is O(n).
<br />

### Big Mistake: Found that comments in my code are killing readability of code.

Chech out this one [Putting comments in code: the good, the bad, and the ugly](https://www.freecodecamp.org/news/code-comments-the-good-the-bad-and-the-ugly-be9cc65fbf83/amp/) <br /><br />

## Day 28

> [C++ program to find all elements in an array that appear more than n/k times](https://github.com/RajVadeghar/100DaysOfCode/blob/main/arrays/Day-28/nBykTimes.cpp)<br />

>  Given an array of size n, find all elements in array that appear more than n/k times.

```     
Example:
        Input : array = {3, 1, 2, 2, 1, 2, 3, 3} and k = 4
        Output : 2, 3

        Explanation : The size of array is 8 (or n = 8), so we need to find all elements that appear more than 2 (or 8/4) times. 
        There are two elements that appear more than two times, 2 and 3.
```
_Algorithm_ :

Approach : (time complexity - O(n))
    1. initialise an unordered map with the help of unordered_map header file.
    2. declare keys of unordered map to array elements
    3. increment those key values for every element of array.
        for example... array[0] = 2; then increment unordered map of key 2... then value at key to gets incremented
    4. then print of keys of unordered map whose value is greater than n / k.

<br />


## Day 29

> [C++ program to to find a triplet in an array that sum to a given value](https://github.com/RajVadeghar/100DaysOfCode/blob/main/arrays/Day-29/tripletOfGivenSum.cpp)<br />

>  Given an array A[] of N numbers and another number 'sum'. Print the three elements in A[] whose sum is exactly x.

```     
Example 1:
    Input : array[] = {1, 4, 45, 6, 10, 8}, x = 13
    Output : The Triplet is 1, 4, 8
Example 2:
    Input : array[] = {1, 2, 4, 3, 6}, x = 10
    Output : The Triplet is 1, 3, 6
```
_Algorithm_ :

1. Sort the given array.
2. Iterate through the array, for every element array[i], check if there exists a pair of sum (x - array[i]).
3. If there exits such pair for an element, then print the element along with the pair found.

<br />

> [C++ program to to find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers](https://github.com/RajVadeghar/100DaysOfCode/blob/main/arrays/Day-29/longestConsecutiveSubSeq.cpp)<br />

>  Given an array of positive integers. Find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers, the consecutive numbers can be in any order.

```     
Example 1:
        Input:
            size = 7
            array[] = {2,6,1,9,4,5,3}
        Output: 6

        Explanation: The consecutive numbers here are 1, 2, 3, 4, 5, 6. 
                        These 6 numbers form the longest consecutive subsquence.

Example 2:
        Input:
            size = 7
            array[] = {1,9,3,10,4,20,2}
        Output: 4

        Explanation: 1, 2, 3, 4 is the longest consecutive subsequence.
```
_Algorithm_ :

1. Sort the given array
2. take two variables count and maxCount 
3. to keep track of count of subseq that we are working on and maxCount is to check max of previous subseq count and present subseq count
4. return maxCount

<br />