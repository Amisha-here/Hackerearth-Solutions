// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/charged-up-array-f35a5e23/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s = 0;
        cin >> n;
        int64_t *a = new int64_t[n];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] >= pow(2, n-1))
                s = (s + a[i]) % 1000000007;
        }
    cout << s << endl;
    }
return 0;
}

