#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n; 
    int x = n;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    cout << sum << endl;
return 0;
}   
/*V. Can't Wait
Once a day, a problem solver saw a number n
. Being a clever problem solver, he wants to sum the digits of this number n
. He can't wait to do this , can you help him ? ♡
.

Input
Only one integer n
 (1≤n≤109)
.

Output
Print the sum of digits of n
.
*/