#include <bits/stdc++.h>
using namespace std;
int main (){
   string N;
long long X;
    cin >> N >> X ;
    int remainder = 0 ;
    for (char c : N){
        remainder = (remainder * 10 + (c - '0')) % X ;
    }
    if (remainder == 0){
        cout << "YES" << endl ;
    }
    else {
        cout << "NO" << endl ;
    } 
}

/*Given two numbers N
 and X
, determine whether N
 is divisible by X
 or not.

Note: a number a
 is divisible by b
 if a mod b=0

Input
The input consists of a single line containing two numbers N
 and X
 (0≤N≤10100000, 1≤X≤109)
.

Output
Print 'YES' if N
 is divisible by X
; otherwise, print 'NO'.*/