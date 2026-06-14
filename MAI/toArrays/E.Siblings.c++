//E. Siblings
/*Given two person names. Each person has {"first name" + "second name"}

Determine whether they are siblings or not.

Note: The two persons are siblings if they share the same second name.

Input
First line will contain two Strings F1
, S1
 which donates the first and second name of the 1st person.

Second line will contain two Strings F2
, S2
 which donates the first and second name of the 2nd person.

Output
Print "Siblings " if they are brothers otherwise print "Not Siblings ".*/
#include <iostream>
#include <string>
using namespace std;

int main() {
string F1, S1, F2, S2;
cin >> F1 >> S1;
cin >> F2 >> S2;
if (S1==S2){
    cout << "Siblings " ;}
else {
    cout << "Not Siblings " ;}
    return 0 ;
}