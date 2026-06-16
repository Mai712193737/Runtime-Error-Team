#include <iostream>
#include <string>
using namespace std;
int main (){
int x,y;
cin >> x >> y;  
if ((x==1 && y==10) || (x==10 && y==1) || (x==y+1) || (y==x+1)){
    cout << "YES";
}
else {
    cout << "NO";
}


/*Ouda has 9
 friends. All 10
 of them were playing (فَتَحي يا وردة) where each friend is holding hands with the two next to him. Each of them is given a number from 1
 to 10
 as shown in the figure according to his order in the cycle.


You are given two numbers x,y
. Determine whether the two friends given these two numbers are holding hands or not.

Input
One line contains 2
 numbers x,y
 – (1≤x<y≤10)
.

Output
If they are holding hands print "YES", otherwise print "NO". Print the answer without quotes.*/