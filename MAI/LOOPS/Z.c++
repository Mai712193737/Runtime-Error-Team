#include <iostream>
#include <string>
using namespace std;
int main (){
    int n , count = 1 ;
    char  y , last ;
    cin >> n >> last ;
    for (int i = 1 ; i < n ; i++){
        cin >> y ;
        if (y == last){
            count++ ;
        }else{
            cout << count << last ;
            count = 1 ;
            last = y ;
        }
    }
    cout << count << last ;
}
/*Run-length encoding (RLE) is a compression method where consecutive occurrences of the same data are replaced with a count of the repetition. For example, the string "AAAABBBCCDAA" would be encoded as "4A3B2C1D2A".

Farid wrote a lot of letters that he wanted to encode, but doing this manually will take forever, so he asked for your help. Given the letters Farid wrote, print the encoded letters.

Input
The first line contains n
 (1≤n≤105
), the number of letters Farid wrote.
The second line contains n
 uppercase letters, the letters Farid wrote.
Output
Print one line containing the encoded sequence.*/