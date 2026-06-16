#include <bits/stdc++.h>
using namespace std;
int main () {
    int n ;
    long long product =1;
    cin >> n ;
    for (int i =0;i<n;i++){
        int x;
         cin>> x;
        product*=x;
    }

cout << product;
return 0;
}


/*You are given n
 integers; compute their product. It's guaranteed that the product can fit in the long long data type.

Input
The first line is a single integer n
 (1≤n≤2⋅105)
.

On the second line, there are n
 integers ai
 (1≤ai≤109)
.

Output
On a single line, output the product.*/