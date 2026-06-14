#include <iostream>
#include <string>
using namespace std;

int main () {
    char first , secound ;
    cin >> first >> secound ;
    cout << ((first == 'R' && secound == 'S') || (first == 'S' && secound == 'P') || (first == 'P' && secound == 'R') ? "p1" : (first == secound )? "draw" : "p2") ;
}

/*J. Rock, paper, scissors.
Input
Only one line contain two letters p1
 , p2
 —The letters will be one of three things only

R : Rock.
P : Paper.
S : Scissors.
Output
If the first player wins, print 'p1'. If the second player wins, print 'p2'. If no one wins, print a 'draw'.
*/