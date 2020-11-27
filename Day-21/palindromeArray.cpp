// C++ program to find whether the elements in the given array are palindrome or not
#include <iostream>
#include <string>
using namespace std;

// functions used in this code
int palinArray(int array[], int size);
bool isPalindrome(int num);

// Driver Code
int main(void) {
    // Specifying number of testcases
    int testcases;
    cout << "Enter number of testcases: ";
    cin >> testcases;

    // Traversing through each testcase
    for(int i = 0; i < testcases; i++) {
        // Specifying size of the array
        int size;
        cin >> size;

        // Specifying the array
        int array[size];
        for(int i = 0; i < size; i++) {
            cin >> array[i];
        }

        // Diplaying output onto the screen
        cout << palinArray(array, size) << endl;
    }
}

// Function to chech all the elements in the given array are palindrome or not
int palinArray(int array[], int size) {
    int count = 0;

    // Traversing through every element of array
    for(int i = 0; i < size; i++) {

        // Cheching if array element is palindrome or not
        if(isPalindrome(array[i])) {
            count++;
        }
    }

    // if count is equal to size, then all the elements in array are palindrome. So returns true
    // if not returns false
    return count == size;
}

// Function to find given number is palindrome or not
bool isPalindrome(int num) {
    int palinSum = 0, last, len = 0;
    int tmp = num;

    // finding length of number
    int tmp_forlen = num;
    do {
        len++;
        tmp_forlen /= 10;
    } while(tmp_forlen);

    // reversing the number
    for(int i = 0; i < len; i++) {
        last = num % 10;
        palinSum = palinSum * 10 + last;
        num = num/10;
    }

    // returns 1 if reversed number and given number are same, else returns 0
    return palinSum == tmp;
}