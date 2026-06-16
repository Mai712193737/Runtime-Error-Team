#include <iostream>
using namespace std;

int main (){
    int x;
    cin >> x;
    cout << ((x/1000) % 2 == 0 ? "Yes" : "No") ;

}




/*T. First digit
Given x
, print "Yes" if the first digit of x
 is even; otherwise, print "No".

Input
The input contains an integer x
 (1000≤x≤9999)
.

Output
Print "Yes" if the first (leftmost) digit of x
 is even; otherwise, print "No".*/