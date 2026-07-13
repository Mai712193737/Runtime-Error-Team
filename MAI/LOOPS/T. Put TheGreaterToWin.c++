#include <iostream>
#include <string>
using namespace std;
int main ( ){
    long long m , n , x , y , grater1 =0 , grater2=0 ;
    cin >> m >> n ;
    for (int i =0 ; i< m ;i++){
        cin >> x ;
        if (x > grater1){
            grater1 = x;
        }
    }
    for ( int j =0; j < n; j++){
        cin >> y ;
         if (y > grater2){
            grater2 = y;
        }
    }
    // عودة لا يفوز إلا إذا كان معه كارت أكبر من أي شيء عند لامورو
if (grater2 > grater1) {
    cout << "Ouda" << endl;
} else {
    cout << "LAMORO" << endl;
}
}

/*There is a game called "put the greater to win." Lamoro and his friend Ouda are addicted to the game. Each of them wants to win, so they are playing optimally. Lamoro has a sequence of cards a
 of size n
 and each card has a value. Ouda also has a sequence b
 of size m
.

Put the greater to win: is a game in which there is a table and a card on it; initially, this card value is 0. Each player selects a card from his sequence and puts it on the table, but this card value should be greater than the table's value (the card value that is on the table). The game ends when one of the players cannot play. Lamoro goes first.

For example, if Lamoro has sequence a
 = {1, 2, 3} and Ouda has sequence b
 = {2, 5}, first Lamoro can select any card of his sequence (because all his cards values are greater than the table's value 0), so he selects 1 (the table's value now = 1), then Ouda selects 2 (the table's value now = 2), then Lamoro selects 3, then Ouda selects 5. And now Lamoro has no greater card value than the table's value, and he loses. So the winner is Ouda.

Input
The first line contains a two integers n
 and m
 (1≤n,m≤105
). The second line contains a sequence of n
 integers a1,a2,...,an
 (1≤ai≤109
) — the Lamoro's sequence. All numbers are separated with spaces.

The third line contains a sequence of m
 integers b1,b2,...,bm
 (1≤bi≤109
) — the Ouda's sequence. All numbers are separated with space.

Output
In the single line, if Lamoro is the winner, print "LAMORO", and if Ouda is the winner, print "Ouda".*/
