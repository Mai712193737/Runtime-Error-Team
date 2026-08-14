#include <bits/stdc++.h>
using namespace std;
int GCD(long long x , long long y ){
   while (y!=0){
    long long a = x%y ;
    x = y ;
    y = a ;
    return x ;
   }
}
int main (){
    long long n , q ;
    cin >> n >> q ;
    long long a[n] ;
    for (int i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }
    long long gcd = a[0] ;
    for (int i = 1 ; i < n ; i++){
        gcd = GCD(gcd , a[i]) ;
    }
    long long  mod = 1e9 + 7 ;
    long long Multiplier = 1 ;
    for (int i = 0 ; i < q ; i++){
        long long x ;
        cin >> x ;
        multiplier = (multiplier * (x%mod )) % mod ;
        long long ans = ((gcd %mod) * x) % mod ;
        cout << ans << endl ;
    }
} 



/*You are given an array a
 of length n
 and q
 queries. Each query modifies the array and asks you to compute a result.

Specifically, for each query:

Multiply every element of the array by the integer x
 provided in the query.
Compute the greatest common divisor (GCD) of the modified array.
The result might be large; output the result modulo 109+7
.

Input
The first line contains two integers n
 and q
 (1≤n,q≤105)
 — the length of the array and the number of queries, respectively.

The second line contains n
 integers a1,a2,…,an
 (1≤ai≤109)
 — the elements of the array.

The third line contains q
 integers x1,x2,…,xq
 (1≤xi≤109)
 — the values used to multiply the array in each query.

Output
Print q
 integers, where the i
-th integer represents the GCD of the array after applying the i
-th query, modulo 109+7
.*/