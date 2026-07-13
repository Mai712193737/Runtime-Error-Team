#include <iostream>
#include <string>
using namespace std;
int main (){
    int n;
    cin >> n ;
    for (int i=1 ; i < n; i++){
        for (int j=1 ; j <= i ; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
/*iven a number N
. Print a left angled triangle that has N
 rows.

For more clarification, see the example below.

Input
The first line contains only one integer n
 (1≤n≤100)
.

Output
Output the required triangle.*/