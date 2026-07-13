#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    int q, x;
    cin >> q;
    while (q--) {
        cin >> x;
        if (isPrime(x)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}


/*You are given q
 queries, each containing a single integer x
. For each query, determine whether x
 is a prime number or not.

An integer x
 is considered prime if it is greater than 1 and has no positive divisors other than 1 and itself.

Input
The first line contains a single integer q
 (1≤q≤103)
, the number of queries.

Each of the next q
 lines contains a single integer x
 (1≤x≤108)
, representing the number to be checked for primality.

Output
For each query, print YES if x
 is a prime number. Otherwise, print NO.*/