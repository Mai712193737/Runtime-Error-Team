#include <iostream>
using namespace std;

int main() {
    int n, x, a;
    cin >> n >> x;

    int last_height = 0;
    bool is_safe = true;

    for (int i = 0; i < n; i++) {
        cin >> a;
        
        if (i == 0) {
           
            last_height = a; 
        } else {
            if (last_height - a > x) {
                is_safe = false;
                break;
            }
            last_height = a; 
        }
    }

    if (is_safe && last_height > x) {
        is_safe = false;
    }

    cout << (is_safe ? "YES" : "NO") << endl;
    return 0;
}


/*n a land full of superheros, Gemy has a strange super power. Gemy has the ability to shrink his body to any size he wants.

One day, Gemy got stuck and couldn't return back to normal, he wanted to get help but he has to walk down n
 stairs to reach his apartment and call for help.

Unfortunately, the difference between each cell in the stairs are not equal and due to his small body, if Gemy fall more than x
 cm he may breaks his legs and gets stuck forever.

Given the height of each of the n
 stair cells, determine if Gemy can make it or not.

Note : Gemy wants to pass all of the n
 cells until he reaches the ground (where height is 0
).
Input
First line contains two integers n
, x
 (1≤n,x≤105)
.
Second line contains n
 integers ai
 where (1≤ai≤ai
−1
 ≤105)
.
Output
Print "YES" if Gemy survives and "NO" otherwise.*/