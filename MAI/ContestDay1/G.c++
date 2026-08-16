#include <iostream>
#include <string>
using namespace std;
int main (){
    int b , d , c , k , t;

    cin >> b >> d >> c >> k >> t;

    for (int i =1 ;i <= t ; i++){
 
        b -= d;

        if ( b<=0 ){
            b=0;
            break;
        }
     
        if ( i % k == 0 ){
           b += c;
        }
        if (b>100)
         b=100;
    }
    cout << b << endl;
    return 0;
}

