#include <iostream>
#include <string>
using namespace std;

int main () {
    int n ; 
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x ;
    cin >> x ;
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            found = true;
            break;
        }
    }
    cout << (found ? "YES" : "NO") << endl;
}
/*Azzam has 2
 tickets for Al-Ahly vs Zamalek match and he doesn't want to attend the match alone.

 Well, Azzam has N
 friends. He will go to the match with one of his friends, if at least one of them has the same age as Azzam.

 You will be given N
 integers represent the ages of n
 Azzam's friends and an integer X
 represents Azzam's age. Determine whether he will attend the match or not.

Input
First line contains a number N
 (1≤N≤105)
 – number of friends.

Second line contains N
 numbers (0≤Ai≤109)
.

Third line contains a number X
 (0≤X≤109)
 – Azzam's age.

Output
Print "YES" if Azzam will go to the match and "NO" otherwise.*/