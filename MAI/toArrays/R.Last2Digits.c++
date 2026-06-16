#include <iostream>
#include <string>
using namespace std;
int main (){
    long long a,b,c,d;
cin >> a >> b >> c >> d ;
cout << (a%100 * b%100 * c%100 * d%100) % 100 ;
}


/*R. Last 2 Digits
You will be given 4
 numbers A,B,C
 and D
. Print the last 2 digits of their Multiplication , ignoring leading zeros.

Input
Only one line containing four numbers A,B,C
 and D
 (0≤A,B,C,D≤109)
.

Output
Print the last 2 digits of their Multiplication.
*/