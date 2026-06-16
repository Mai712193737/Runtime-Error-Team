#include <iostream>
#include <string>
using namespace std;
int main (){
long long n; 
cin >> n;
cout << (n%2==0 ? "Gom3a" : "Ouda") ;

//(n % 2 != 0)? cout << "Ouda" : cout << "Gom3a" ;
    return 0;
}
/*Ouda and Gom3a are playing a game with n
 cards. The players take turns drawing one card per turn. Ouda always goes first.

The player who cannot draw a card loses.

Determine who will win the game if both play optimally, assuming Ouda starts first.

Input
A single integer n
 (1≤n≤1018)
 — the number of cards

Output
Print "Ouda" if Ouda wins, otherwise print "Gom3a".*/