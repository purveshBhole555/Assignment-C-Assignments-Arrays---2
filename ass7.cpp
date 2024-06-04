#include <iostream>
using namespace std;

bool isPalindrome(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    
    while (start < end) {
        if (arr[start] != arr[end]) {
            return false;  // Array is not a palindrome
        }
        start++;
        end--;
    }
    return true;  // Array is a palindrome
}

int main() {
    int arr[] = {1, 2, 3, 4, 3, 2, 1};  // Example array
    int size = sizeof(arr) / sizeof(arr[0]);

    if (isPalindrome(arr, size)) {
        cout << "The given array is a palindrome." << endl;
    } else {
        cout << "The given array is not a palindrome." << endl;
    }

    return 0;
}


// output is 

The given array is a palindrome