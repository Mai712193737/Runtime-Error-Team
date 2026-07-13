#include <iostream>
#include <string>
using namespace std;
int main (){

    string text;
    getline(cin, text);
   
    if (text.find("Ouda") != string::npos) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
