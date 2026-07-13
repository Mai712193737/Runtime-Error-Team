#include <isostream>
#include <algorithm>
using namespace std;
int main (){
    string str ;
    cin >> str ;
    int s = str.size();
    int arr[s];
    for (int i = 0; i < s ; i++) {
        cout << str[i] << " ";
    }
    
}