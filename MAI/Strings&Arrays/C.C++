
#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    int minVal, maxVal, minIndex = 0, maxIndex = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (i == 0) {
            minVal = arr[i];
            maxVal = arr[i];
        }

        if (arr[i] < minVal) {
            minVal = arr[i];
            minIndex = i;
        }

        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxIndex = i;
        }
    }

    swap(arr[minIndex], arr[maxIndex]);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
/*Our friend Fady was studying arrays and he faced an interesting task.

You will be given an array of N
 elements. Print the array after doing the following operations:

Find the minimum number.
Find the maximum number.
Swap the minimum number with the maximum number.
Note : It's guaranteed that all numbers are distinct.
Input
First line contains a number N
 (2≤N≤104)
 – number of elements.

Second line contains N
 numbers (−105≤Ai≤105)

It's guaranteed that all numbers are distinct.

Output
Print the array after applying the operation.*/