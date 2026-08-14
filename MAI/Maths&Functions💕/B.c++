
#include <iostream>
using namespace std;

long long sum_up_to(long long n) {
    return n * (n + 1) / 2;
}

long long range_sum(long long l, long long r) {
    return sum_up_to(r) - sum_up_to(l - 1);
}

int main() {
    long long l, r;
    cin >> l >> r;

    long long total_sum = range_sum(l, r);

    
    long long first_even = (l % 2 == 0) ? l : l + 1;
    long long last_even = (r % 2 == 0) ? r : r - 1;
    
    long long even_sum = 0;
    if (first_even <= last_even) {

        long long n = (last_even - first_even) / 2 + 1;
        even_sum = n * (first_even + last_even) / 2;
    }

    long long odd_sum = total_sum - even_sum;

    cout << total_sum << " " << even_sum << " " << odd_sum << endl;

    return 0;
}
/*You are given two integers l
 and r
. Calculate the following three values for the range [l,r]
 (inclusive):

1. The summation of all numbers.

2. The summation of all even numbers.

3. The summation of all odd numbers.

Input
The input consists of a single line containing two integers l
 and r
 (1≤l≤r≤109)
.

Output
Print three space-separated integers:

1. The summation of all numbers in the range [l,r]
.

2. The summation of all even numbers in the range [l,r]
.

3. The summation of all odd numbers in the range [l,r]
.*/