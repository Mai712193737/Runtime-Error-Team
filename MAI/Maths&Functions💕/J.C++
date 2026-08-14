#include <bits/stdc++.h>
using namespace std;
int main (){
    int n , count =0;
    cin >> n ;
    for (int i = 0 ; i < n ; i++){
        int x ;
        cin >> x ;
        if (x % 2 == 0){
            count++ ;
        }

    }
 cout << (count ==0 ? -1 : count) << endl ;
 return 0 ;
}
/*You are given an array of n
 integers and an integer l
. Your task is to find the largest subset of the array that has a least common multiple (LCM) equal to l
, or determine that it is impossible to form such a subset.

A subset of an array can be obtained by removing 0
 or more elements from that array.

The LCM of a subset is the smallest number that's divisible by all subset numbers.

Input
The first line contains two integers n
 (1≤n≤27)
 and l
 (1≤l≤109)
.

The second line contains n
 integers a1,a2,…,an
 (1≤ai≤106)
 — the elements of the array.

Output
Print the size of the largest subset that has an LCM equal to l
, or print −1
 if it is impossible to form such a subset.*/