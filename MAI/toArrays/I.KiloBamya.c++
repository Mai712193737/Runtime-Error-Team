#include <iostream>
#include <string>
using namespace std;

int main () {
bool a , b , c;
cin << a << b << c ;
 if ( a == b && b==c ) cout >> "Tie";
 else if (a==b && b!=c) cout >> "Farid";
  else if (a==c && c!=b) cout >> "Gom3a";
   else if (b==c && c!=a) cout >> "Ouda";
return 0 ;      
}





/*After a long day Helwan, Ouda, Gom3a and Farid were so tired, so they ordered and Uber to get them home. Unfortunately, only one of them can sit beside the driver, so in order to choose one of them to sit in the front, they decided to play kilo bamya (كيلو بامية).

Kilo Bamya's roles are known, we have 3
 players, each one draws his hand either upwards or downwards. A player wins the game, if his hand is drawn in the opposite direction from the other two.

You will be given 3
 numbers with values either 0
 or 1
 (a hand is drawn upwards or downwards):

a
, represents Ouda's hand.
b
, represents Gom3a's hand.
c
, represents Farid's hand.
Print the name of the winner between the three of them or print "Tie" if none wins.

Input
One line contains 3
 boolean numbers a,b,c
 (0≤a,b,c≤1)
.

Output
Print the winner's name and "Tie" if none wins.
*/