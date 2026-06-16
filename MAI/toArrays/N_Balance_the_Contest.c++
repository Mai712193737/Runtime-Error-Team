#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a, b, c, n;  
      cin >> a >> b >> c >> n;
    if (a >= 1 && b >= 1 && c >= 1 && a + b + c >= n && n >= 3) {
        cout << "YES";
    } else {
        cout << "NO";
    }

}
/*After spending some time preparing this contest by creating and collecting problems, We ended up with a
 easy problems, b
 medium problems, c
 hard problems.

We say that a contest is balanced if all of the following applies:

The contest must consist of exactly n
 problems.
The contest contains at least 1
 easy problem.
The contest contains at least 1
 medium problem.
The contest contains at least 1
 hard problem.
Due to the large amount of problems we collected we got confused and started arguing about whether we can
 use any number of the problems we collected to create a balanced contest or not, So we asked for your help.

Given the number of easy problems, the number of medium problems, the number of hard problems and the number
 of problems needed in the contest, tell whether it's possible to make a balanced contest or not

Input
The input contains 4 integers:

a
 the number of easy problems;
b
 the number of medium problems;
c
 the number of hard problems;
n
 the number of problems needed for the contest;
where (0≤a,b,c≤10)
 (1≤n≤20)

Output
Print "YES" if it is possible to create a balanced contest satisfying above requirements, and "NO" otherwise.

You can output the answer in any case (uppercase or lowercase). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive answers.*/