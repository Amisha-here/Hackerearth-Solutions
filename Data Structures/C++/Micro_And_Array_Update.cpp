// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/micro-and-array-update/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, i, val;
        cin >> n >> val;

        int *a = new int[n];
        for ( i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a+n);

        int m = val - a[0];
        if (m >= 0)
            cout << m << endl;
        else
            cout << 0 << endl;
    }
}

