#include <iostream>
#include <string>
using namespace std;
int main (){
    int n , a , b , c ;
    cin >> n ;
    long long count = 0;

for (a = -n; a <= n; a++) {
    for (b = -n; b <= n; b++) {
        for (c = -n; c <= n; c++) {
                count ++;
        }
    }
}
return cout << count << endl , 0 ;
}
    
    
            /*P. Sum of 4 (Easy version)

        is is the easy version of the problem. The difference between the two versions is the constraints

        Given an integer n (0≤n≤100)
        print the number of solutions for the given equation
        a+b+c+d=n
        such that
        |a|≤n,|b|≤n,|c|≤n.
        d
        can be any integer.

        Input
        one integer n (0≤n≤100)
        .

        Output
        the number of solution for the equation.

        */