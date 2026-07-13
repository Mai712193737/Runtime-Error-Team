

/*You are given the first three terms of an arithmetic sequence (t1,t2,t3)
 and an integer n
. Compute the value
Difference(n)=∑1≤k≤nk oddak−∑1≤k≤nk evenak,

i.e., the sum of terms at odd indices minus the sum of terms at even indices, considering only the first n
 terms of the sequence.

Input
The first line contains an integer t
 (1≤t≤104
) — the number of test cases.

Each of the next t
 lines contains four integers t1,t2,t3
 (1≤t1≤t2≤t3≤106
), (1≤n≤109
) — the first 3 terms in the sequence and the number of terms required for the calculation.

Output
For each test case, output a single integer, the value of Difference(n)
.*/