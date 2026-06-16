#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    float n;
    cin >> n;
    if (n == (int)n) {
        cout << "int " << (int)n << endl;
    } else {
        cout << "float " << (int)n << " " << fixed << setprecision(3) << n - (int)n << endl;
    }
    return 0;
}

/*Given a number N
. Determine whether N
 is float number or integer number.

Note :

If N is float number then print "float" followed by the integer part followed by decimal (It consists of 3 decimal digits.) part separated by space.
If N is integer number then print "int" followed by the integer part separated by space.
For more clarification see the examples below.

Input
Only one line containing a number N
 (1≤N≤103)
.

Output
Print the answer required above.*/