#include <bits/stdc++.h>
using namespace std;
int main (){
cin >> t;
for (int i =0;i<t;i++){}
    cin >> n;
    int sum =0;
    for (int j =0;j<n;j++){
        int x;
        cin >> x;
        if (j%2==0){
            sum+=x;
        }
        else{
            sum-=x;
        }
    }
    cout << sum << endl;
    

}


/*You are given a sequence of integers. Output the alternating sum of this sequence. In other words, output a1−a2+a3−a4+a5−…
. That is, the signs of plus and minus alternate, starting with a plus.

Input
The first line of the test contains one integer t
 (1≤t≤1000
) — the number of test cases. Then follow t
 test cases.

The first line of each test case contains one integer n
 (1≤n≤50
) — the length of the sequence. The second line of the test case contains n
 integers a1,a2,…,an
 (1≤ai≤100
).

Output
Output t
 lines. For each test case, output the required alternating sum of the numbers.*/