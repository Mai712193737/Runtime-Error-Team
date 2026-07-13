

/*You are given an array a
 of length n
 and q
 queries. Each query modifies the array and asks you to compute a result.

Specifically, for each query:

Multiply every element of the array by the integer x
 provided in the query.
Compute the greatest common divisor (GCD) of the modified array.
The result might be large; output the result modulo 109+7
.

Input
The first line contains two integers n
 and q
 (1≤n,q≤105)
 — the length of the array and the number of queries, respectively.

The second line contains n
 integers a1,a2,…,an
 (1≤ai≤109)
 — the elements of the array.

The third line contains q
 integers x1,x2,…,xq
 (1≤xi≤109)
 — the values used to multiply the array in each query.

Output
Print q
 integers, where the i
-th integer represents the GCD of the array after applying the i
-th query, modulo 109+7
.*/