// https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/alien-language/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        int pos;
        for (int i = 0; i < b.size(); i++) {
            pos = a.find(b[i]);
            if (pos != -1) {
                cout << "YES\n";
                break;
            }
        }

        if (pos == -1)
            cout << "NO\n";
    }
}
