#include <iostream>
#include <algorithm>
namespace std;
int main (){
int n ;
cin >> n ;
int arr[n];
for (int i = 0; i < n ; i++) {
    cin >> arr[i];
}
for (int i = 0, j = n - 1; i < j; i++, j--) {
        if (arr[i] != arr[j]) {
            cout << "NO" << endl;
            return 0; 
        }
    }

    cout << "YES" << endl; 
}
/*An array is called a palindrome if it reads the same backward and forward.

For example, arrays [1
] and [1,2,3,2,1
] are palindromes, while arrays [1,12
] and [4,7,5,4
] are not.

Given an array of N
 integers, your task is to determine whether it is a palindrome or not.

Input
The first line contains a number N
 (1≤N≤105)
 – the number of elements.

The second line contains N
 numbers (0≤Ai≤109)
.

Output
Print "YES" if the array is a palindrome and "NO" otherwise.
