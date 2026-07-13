#include <iostream>
#include <string>
using namespace std;
int main (){
    int n ;
    cin >> n ;
    bool isPrime = true;
    if (n <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
/*You will given an integer n
 print "YES" if the n
 is prime number and "NO" other wise.

Input
Only one line contain one integer n
 (1≤n≤105)
.

Output
You can output "Yes" and "No" in any case (for example, strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive response).*/