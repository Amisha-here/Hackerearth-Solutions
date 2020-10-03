// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/sum-it-if-you-can-4867f851/

#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, prod = 0, base = 10, c = 0;
    cin >> n;
    long long t = n;
    while (t != 0) {
        t /= 10;
        c++;
    }

    if (c != 10) {
        cout << "Illegal ISBN\n";
    } else {
        while (n != 0) {
            int r = n%10;
            prod += r*base;
            n = n/10;
            base--;
        }
    }
    if (prod%11 == 0)
        cout << "Legal ISBN\n";
    else
        cout << "Illegal ISBN\n";
}
