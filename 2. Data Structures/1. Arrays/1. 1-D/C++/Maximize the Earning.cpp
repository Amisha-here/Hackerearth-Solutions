// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/maximize-the-earning-137963bc-323025a6/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], i, c = 0, max = 0;
        for (i = 1; i <= n; i++) cin >> a[i];
        for (i = 1; i <= n; i++) {
            if (a[i] > max) {
                max = a[i];
                c++;
            }
        }
    cout << c*m << endl;
    }
}

