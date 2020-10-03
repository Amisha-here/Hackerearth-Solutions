// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/aman-mrsharma/


#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, c = 0;
    cin >> n;
    while (n--) {
        int r, x;
        cin >> r >> x;
        if (44*r <= x*700)
            c++;
    }
    cout << c;
}

