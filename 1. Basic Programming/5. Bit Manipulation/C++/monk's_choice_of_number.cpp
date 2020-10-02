#include <bits/stdc++.h>

using namespace std;

int check(long int n)
{
    int counter = 0;
    while (n)
    {
        n = n & (n - 1);
        counter++;
    }
    return counter;
}
void sort(int n, int s[], int k)
{
    int i, j;

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (s[i] < s[j])
            {
                int a = s[i];
                s[i] = s[j];
                s[j] = a;
            }
        }
    }

    int z = 0;
    for (i = 0; i < k; i++)
    {
        z = z + s[i];
    }
    cout << z << endl;
}
int main()
{
    int t, i, j, n, k, sum, b, mus;

    cin >> t;

    while (t--)
    {
        mus = 0;
        cin >> n >> k;

        int a, count[n];

        for (i = 0; i < n; i++)
        {
            cin >> a;
            count[i] = check(a);
        }
        sort(n, count, k);
    }
    return 0;
}

