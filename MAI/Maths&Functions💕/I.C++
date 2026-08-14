
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, q;
    double m;
    cin >> n >> q >> m;

    double sum = n * m;

    for (int i = 0; i < q; i++) {
        double val;
        cin >> val;
        sum += val;
    }
    cout << fixed << setprecision(6) << sum / (n + q) << "\n";

    return 0;
}

/*A sequence of n
 numbers has a known mean value, but the actual numbers in the sequence are unknown. You are given q
 additional numbers that will be added to this sequence, and your task is to compute the new mean of the sequence after the numbers are added.

Input
The first line contains two integers n
 and q
 (1≤n,q≤105)
.

The second line contains a possibly floating-point number m
 (1≤m≤106)
 representing the mean of the original n
 numbers.

The third line contains q
 (0≤q≤105)
 integers representing the numbers that have been added to the sequence.

Output
Print the new mean of the sequence after adding the q
 numbers. The result should be accurate to at least six decimal places.*/