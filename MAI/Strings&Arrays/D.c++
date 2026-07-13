#include <iostream>
#include <algorithm>
using namespace std;
int main (){
int n ;
cin >> n ;
int arr[n];
for (int i = 0; i < n ; i++) {
    cin >> arr[i];
}
sort(arr, arr + n ,greater<int>());
for (int i = 0; i < n ; i++) {
    cout << arr[i] << " ";
}
}

/*D. Helwan Microbus
time limit per test1 second
memory limit per test256 megabytes
As any other day, Ouda went to the station to ride a microbus to Helwan. He noticed some elderly people at the end of the line for Helwan microbus, he felt bad that they're gonna wait a lot to ride the microbus.

So, as Ouda has some morals, he suggested to sort the line by the age of the people standing, so they can ride first.

Given the ages of N
 people standing in the line, print the line order according to the ages after Ouda applies his idea.

Input
First line contains a number N
 (1≤N≤103)
 – number of elements.

Second line contains N
 numbers (0≤Ai≤109)
.

Output
Print the line order according to the ages after Ouda applies his idea.