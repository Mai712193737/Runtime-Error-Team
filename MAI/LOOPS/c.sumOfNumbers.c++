#include <iostream>
using namespace std;
int main () {
    int n ; long long sum =0 ;
    cin >> n ;
   for (int i =0 ;i<n;i++){
    int x;
    cin >>x;
    sum+=x;
   }
   cout << sum ;
   return 0 ;
}

/*You are given n
 integers; compute their sum.

Input
The first line is a single integer n
 (1≤n≤2⋅105)
.

On the second line, there are n
 integers ai
 (1≤ai≤109)
.

Output
On a single line, output the sum.*/