#include <iostream>
#include <string>
using namespace std;
int main () {
    int n ; 
    cin >> n;
    for (int i = 0; i < n; i++) {
     int x ;
        cin >> x;
        cout << (x % 2 == 0 ? "EVEN" : "ODD") << endl;
    }
}

/*B. Even or Odd
You are given a number n
. Your task is to determine whether the number is even or odd.

Input
The first line contains an integer t
 (1≤t≤105
) — the number of test cases.

Each of the next t
 lines contains a single integer n
 (1≤n≤109)
.

Output
For each test case, print: "EVEN" (without the quotes) if the number is even or "ODD" (without the quotes) if the number is odd.
*/