#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;

    int max_even = -1;
    int min_odd = 1000000001;

    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        if (x % 2 == 0){
            if (x > max_even)
                max_even = x;
        }
        else{
            if (x < min_odd)
                min_odd = x;
        }
    }

    cout << max_even << " " << min_odd;
    return 0;
}

/*Ali is obsessed by numbers, whenever he sees a set of numbers he turns it into a task.

Ali has N
 friends where their ages vary. Ali will give you a set of N
 numbers represented his friends' ages. You will be asked to print the maximum even age and the minimum odd age from the given numbers.

Note: It's guaranteed that both even and odd numbers are found in the set.

Input
First line contains a number N
 (2≤N≤103)
.

Second line contains N
 numbers Xi
 (0≤Xi≤109)
.

Output
Print the maximum even age and the minimum odd age from the given numbers.*/