#include <bits/stdc++.h>
using namespace std;
int main (){
    int RA , CA ;
    cin >> RA >> CA ;   
    int A[RA][CA] ;
    for (int i = 0 ; i < RA ; i++){
        for (int j = 0 ; j < CA ; j++){
            cin >> A[i][j] ;
        }
    }
    int RB , CB ;
    cin >> RB >> CB ;
    int B[RB][CB] ;
    for (int i = 0 ; i < RB ; i++){
        for (int j = 0 ; j < CB ; j++){
            cin >> B[i][j] ;
        }
    }
    int C[RA][CB] ;
    for (int i = 0 ; i < RA ; i++){
        for (int j = 0 ; j < CB ; j++){
            C[i][j] = 0 ;
            for (int k = 0 ; k < CA ; k++){
                C[i][j] += A[i][k] * B[k][j] ;
            }
        }
    }
    for (int i = 0 ; i < RA ; i++){
        for (int j = 0 ; j < CB ; j++){
            cout << C[i][j] << " " ;
        }
        cout << endl ;
    }

}

/*Given two matrices A and B. Print their Multiplication.

Input
First line contains two numbers RA
 and CA
 (1≤RA,CA≤100)
 number of rows and number of columns respectively of Matrix A
.

Next RA
 lines will contain CA
 numbers (−100≤Ai,j≤100)
 Matrix A
 numbers.

Next line will contain two numbers RB
 and CB
 (1≤RB,CB≤100)
 number of rows and number of columns respectively of Matrix B
.

Next RB
 lines will contain CB
 numbers (−100≤Bi,j≤100)
 Matrix B
 numbers.

It's guaranteed that number of columns in the matrix A
 is equal to number of rows in the matrix B
.

Output
Print the Multiplication result.*/