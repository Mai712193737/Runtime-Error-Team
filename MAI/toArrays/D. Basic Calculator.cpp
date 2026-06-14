#include <iostream>
using namespace std;

int main() {
    int a , b;
    char s;
    cout << "Enter two numbers: ";
    cin >> a >> s >> b;
    if (s == '+') {
        cout << (a + b) << endl;
    } else if (s == '-') {
        cout << (a - b) << endl;
    } else if (s == '*') {
        cout  << (a * b) << endl;
    } else if (s == '/') {
        if (b != 0) {
            cout << (a / b) << endl;
        } else {
            cout << "Error: Division by zero!" << endl;
        }
    } else {
        cout << "1Invalid operation selected!" << endl;
    }
    return 0;
}