#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    int n;
    cin >> n;
    
    long long arr[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    long long result = -2e18;

    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            long long current_val = (arr[i] * i) - (arr[j] * j);
            if (current_val > result) {
                result = current_val;
            }
        }
    }

    cout << result << endl;
    return 0;
}
You will be given an array of n
 integers, print the largest possible result for ai×i−aj×j
.

Note : Numbers i
 and j
 must be distinct, where (1≤i<j≤n)
.

Input
First line contains one integer n
 (2≤N≤104)
.

Second line contains n
 numbers (−106≤ai≤106)
.

Output
Print a single line that contains the largest possible result for the equation shown above.*/