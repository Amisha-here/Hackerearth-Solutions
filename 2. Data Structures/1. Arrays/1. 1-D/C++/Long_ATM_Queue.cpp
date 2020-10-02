// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/long-atm-queue-3/

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int *a = new int[n], i, c = 1;

    for (i = 0; i < n; i++)
        cin >> a[i];

    for (i = 0; i < n-1; i++)
        if (a[i+1] < a[i])
            c++;

    cout << c << endl;
}

