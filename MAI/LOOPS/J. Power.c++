#include <bits/stdc++.h>
using namespace std;
int main (){
    int x,y; 
    cin>>x>>y;

    long long ans=1;
    cout << pow(x,y);
    
    if (x==0 && y==0){
        cout << 1;
    }
}
/*You are given two integers x
 and y
 , calculate xy
 ( x
 power y
 ). It's guaranteed that the answer would fit in the long long data type. Assume 00=1
.

Input
The first line contains two integers x
 and y
 (0≤x,y≤104
)

Output
Print the value of xy*/