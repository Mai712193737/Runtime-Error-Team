#include <bits/stdc++.h>
using namespace std;
int main (){
    string str1, str2 ;
    cin >> str1 >> str2 ;
    sort (str1.begin(), str1.end());
    sort (str2.begin(), str2.end());
    cout << (str1 < str2 ? str1 : str2) << endl;
}

/*While studying strings, Kholy faced a very interesting task and he wants your help.

Given two strings X
 and Y
 . Print the smallest lexicographical one after sorting each string.

Note: Lexicographical is the way of ordering the words based on the alphabetical order of their component letters.

Input
first line contains one string X
 (1≤|X|≤20)
 consists of lowercase English letters.

second line contains one string Y
 (1≤|Y|≤20)
 consists of lowercase English letters.

Output
Print the smallest lexicographical string.*/