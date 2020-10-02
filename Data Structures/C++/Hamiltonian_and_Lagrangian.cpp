// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/hamiltonian-and-lagrangian/

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int *a = new int[n];
    int i, j, k = -1;

    for (i = 0; i < n; i++)
        cin >> a[i];

    for (i = 0; i < n-1; i++) {
        for (j = i+1; j <= n-1; j++)
            if (!(a[i] >= a[j]))
                break;

        if (j == n)
            cout << a[i] << " ";
    }

    cout << a[n-1] << endl;
}

