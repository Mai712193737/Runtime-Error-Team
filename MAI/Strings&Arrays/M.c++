#include <iostream> 
#include <string>
useing namespace std;
int main (){
string str;
getline(cin, str);
int n = str.size();
for(int i=0; i<n; i++){
        
    if(str[i]>='a' && str[i]<='z'){
        str[i] = str[i] - 32;
    }
    else if(str[i]>='A' && str[i]<='Z'){
        str[i] = str[i] + 32;
    }
    cout << str;
}
/*M. Caps Lock
time limit per test1 second
memory limit per test256 megabytes
Caps Lock is a keyboard button that allows you to switch the letter form from uppercase to lowercase or vise versa (او العكس).

Jimy was writing a letter for Ouda and for some reason his Caps Lock was not working well, so all the words in the letter was sent in the opposite case. So if a letter is meant to be lowercase, it was written in uppercase and vice verse.

Given the sent letter, print how the letter would be if the caps lock was working well.

Input
One line contains a string S
 (1≤|S|≤105)
 – where |S|
 is the length of S
.

S
 contain lower case , upper case , space and/or special letters.

Note : It's guaranteed S
 not contain only Spaces

Output
Print the answer.*/