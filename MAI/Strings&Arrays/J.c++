#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; 
    cin >> n >> m;

    int maxsum = -1; 
    for (int i = 0; i < n; i++) {
        int sum = 0; 
        for (int j = 0; j < m; j++) {
            int paper; 
            cin >> paper; 
            sum += paper;
        }
        
        if (sum > maxsum) {
            maxsum = sum;
        }
    }

    cout << maxsum << endl;
    return 0;
}