#include <iostream>
using namespace std;

int main() {
    int n;
    int P =0, N =0, O =0, E =0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        if (x % 2 == 0) {
           ++E;
         } else {
            ++O;
        } 

        if  (x > 0) {
            ++P;
         }else if  (x < 0) {
            ++N;
        }
    }

    cout << "Even: " << E << endl;
    cout << "Odd: " << O << endl;
    cout << "Positive: " << P << endl;
    cout << "Negative: " << N << endl;

    return 0;
}


/*Gom3a was studying Mathematics with his friends when they found an easy task.

Given N
 numbers. Count how many of these values are even, odd, positive and negative.

Input
First line contains one number N
 (1≤N≤105)
 number of values.

Second line contains N
 numbers (−105≤Xi≤105)
.

Output
Print four lines with the following format:

First Line: "Even: X
", where X is the count of even numbers in the given input.

Second Line: "Odd: X
", where X is the count of odd numbers in the given input.

Third Line: "Positive: X
", where X is the count of positive numbers in the given input.

Fourth Line: "Negative: X
", where X is the count of negative numbers in the given input.*/