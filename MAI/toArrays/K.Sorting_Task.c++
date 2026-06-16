
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int arr[3] = {a, b, c};

    sort(arr, arr + 3);

    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;

    cout << a << " " << b << " " << c << endl;

    return 0;
}

/*Ouda has three numbers A,B,C
. One day he decided to sort them ascendingly and write the answer.

Ouda wants to see if Gom3a can sort them as will, so he wrote the numbers by their first order and gave them to Gom3a.

Your task is to print these numbers in ascending order as Ouda has done first then print the numbers by their first order to give them to Gom3a.

Input
Only one line containing three numbers A,B,C
 (−106≤A,B,C≤106)
.

Output
Print the values in ascending order then print the numbers by their first order.*/