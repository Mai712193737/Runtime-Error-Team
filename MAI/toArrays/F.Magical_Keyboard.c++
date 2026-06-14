#include <iostream>
#include <string>
using namespace std;

int main () {

    char c;
    cin >> c ;
    if (c >= 'a' && c <= 'z') {
        c = c - 32 ;
        cout <<c;
    }
    else if (c >= 'A' && c <= 'Z') {
        c = c + 32 ;
        cout <<c;

    }

    return 0 ;}

    /*
Medo has a magical keyboard which reverse the case of the letters you are writing. So that if the letter is lowercase it is converted to uppercase letter and vice versa.

Medo will write one letter C
. Given that letter what will be the output?

Note : The difference between 'a' and 'A' in ASCII is 32 .

Input
One line containing a character C
 which will be a capital or small letter.

Output
Print the answer to this problem.

Examples
InputCopy
a
OutputCopy
A
InputCopy
Z
OutputCopy
z
Note
In the first example :

Letter 'a' is lowercase so it is converted to 'A'.*/