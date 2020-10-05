// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/achhe-din-6baeb5d1/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        unordered_map<int , int> m;
        int *a = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            m[a[i]]++;
        }
        for (auto i : m) {
            if (i.second == 1) {
                cout << i.first << endl;
                break;
            }
        }
    }
}
