#include <iostream>
#include <algorithm>
using namespace std;
int main (){
    int n , b , c ;
    cin >> n;
    cout << (n/365) << " years"<<endl;
    b = n%365;
    cout << (b/30)<< "months"<<endl;
    cout << b%30;
    return 0;
}



/*S. Age In Days
Given a number N
 corresponding to a person's age (in days), print his age in years, months, and days, followed by its respective messages "years", "months", and "days".

Note: consider the whole year has 365
 days and 30
 days per month.

Input
Only one line containing a number N
 (0≤N≤106)
.

Output
Print the output, like the following examples.*/