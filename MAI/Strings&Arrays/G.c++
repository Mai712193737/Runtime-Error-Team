#include <iostream>
#include <algorithm>
using namespace std;
int main (){
    string str ;
    cin >> str ;
    int s = str.size();
    int count = 0;
    int arr[s];
    for (int i =0 ; i< s ; i++) {
        arr[i] = str[i];
        if (str[i] == 'A' || str[i] == 'a') {
            count++;
        }
    }
    cout << count << endl;

}
    /*As his name starts with letter 'A', Adham loves this letter.

Adham will give you a string S
 and your task is to print the number of times letter ′A′
 or ′a′
 appears (either in uppercase or lowercase).

Input
Only one line contains string S
 (1≤|S|≤107)
 – where |S|
 is the length of the string.

Output
Print the answer required above.*/