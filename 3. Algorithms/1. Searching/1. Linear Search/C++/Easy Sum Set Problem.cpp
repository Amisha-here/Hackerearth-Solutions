// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/easy-sum-set-problem-7e6841ca/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n;
    int *a = new int[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cin >> m;
    int *c = new int[m];
    for (int i = 0; i < m; i++)
        cin >> c[i];

    int b[101] = {0};

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (c[j] > a[i])
                b[c[j] - a[i]]++;

    int k = 1;
    while (k <= 100) {
        if (b[k] == n)
            cout << k << " ";
        k++;
    }
}
