#include <iostream>
#include <string>
using namespace std;
int main (){
    int n , m ;
    cin >> n >> m ;
    for (int i = 1 ; i <= m ; i++){
        if (n % i == 0){
            cout << i << " is a divisor of " << n << endl;
        }
    }
    return 0 ;
}
/*You will be given two integers N
 and M
 , where your task is to print the numbers from 1 to M
 which are divisors of N
 .

Note : Number x
 is considered a divisor of y
 when yx
 results in an integer.

Input
Input consists of one line, containing N
,M
 (1≤N≤109
) , (1≤M≤105
)

Output
Output "'X
 is a divisor of N
"' where (1≤X≤M
) if X
 is a divisor of N
, with all lines separate.*/