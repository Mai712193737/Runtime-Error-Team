#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main (){
int x1, y1,x2 ,y2 ,d;
cin >> x1 >> y1;
cin >> x2 >> y2;
d = abs(x1-x2) + abs(y1-y2);
cout << d ;
    return 0;
}


/*You are given two points on a 2D plane: (x1,y1)
 and (x2,y2)
.

Your task is to calculate the Manhattan distance between them.

The Manhattan distance between two points is defined as:

d=|x1−x2|+|y1−y2|

Here, the vertical bars

|⋅|
 denote the absolute value.

For example

|5|=5
|−5|=5
|7−3|=4
|3−7|=4
Input
The first line contains two integers x1,y1
 (−108≤x1,y1≤108)
.

The second line contains two integers x2,y2
 (−108≤x2,y2≤108)
.

Output
Print a single integer — the Manhattan distance between the two points.*/