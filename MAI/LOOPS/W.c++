#include <iostream>
#include <string>
using namespace std;

bool isLucky(int n) {
    string s = to_string(n);
    for (char c : s) {
        if (c != '4' && c != '7') {
            return false; 
        }
    }
    return true;
}

int main() {
    int N, M;
    cin >> N >> M;
    
    bool found = false;
    for (int i = N; i <= M; i++) {
        if (isLucky(i)) {
            cout << i << " ";
            found = true;
        }
    }
    
    if (!found) {
        cout << -1;
    }
    
    return 0;
}
/*Coach Medo is a very strict coach. He doesn't allow Fady to play with his friends unless he solves his tasks. After solving so many tasks, Fady is so tired so he needs your help with the last task.

You will be given two integers N,M
, you have to print all the lucky numbers between N
 and M
 (inclusive) in increasing order.

Lucky number is any positive number that it's decimal representation contains only 4
 and 7
. For example 4
, 7
, 47
, 774
 are lucky, 147
, 675
 are not.

Input
Only one line containing two numbers N
 and M
 (1≤N≤M≤105)
 .

Output
Print all the lucky numbers between N
 and M
 (inclusive) in increasing ordere. If there is no lucky numbers print −1
.