#include <iostream>
#include <string>
using namespace std;
int main (){
    int k ;
    cin >> k ;
    int arr[k];
    for (int i = 0; i < k ; i++) {
        cin >> arr[i];
      
    }
    int a ;
     cin >> a ;
    for (int i = 0; i < k ; i++) {
        cout << arr[i] + a << " ";
    }
}

/*Seif has a big supermarket where he sells N
 products, each product has price xi
 where (1≤i≤n)
.

This month, his income wasn't as expected, so he decided to increase the price of each product by k
.

Given the prices of N
 products and k
, print the price of each product in order after increasing their prices by k
.

Input
First line contains a number N
 (1≤N≤105)
 – number of products.

Second line contains N
 numbers (0≤xi≤109)
.

Third line contains a number k
 (0≤k≤109)
.

Output
Print the price of each product in order after increasing their prices by k
.*/