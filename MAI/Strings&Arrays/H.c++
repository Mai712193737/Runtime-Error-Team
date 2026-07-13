
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    
    getline(cin, s, '-');
    
    cout << s << endl;
    
    return 0;
}
/*Everyone know Hey Google. A voice assistant google feature that detects voice, turn it into text and replay according to it.

Hey Google may have one defect, if you stop talking in the middle it processes the already detected voice and neglects any voice follows.

Tanjirou was using Hey Google but he stopped talking for some seconds in the middle, he will give you what he said as a string S
 that contains a letter '-' represents the time he stopped in.

Print what Hey Google detected before Tanjirou stopped.

Note: It's guaranteed the first letter not equal '-'

Input
One line contains string S
 (1≤|S|≤105)
 where |S|
 is the length of the string.

Output
Print the answer required above.*/