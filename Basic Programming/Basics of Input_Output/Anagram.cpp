#include <bits/stdc++.h>

using namespace std;

int main()

{
    int t;
    cin >> t;

    while (t--)
    {
        string s1, s2;

        cin >> s1 >> s2;

        int n1 = s1.length();
        int n2 = s2.length();

        int a[26] = {0};
        int count = 0;

        for (int i = 0; i < n1; i++)
        {
            a[s1[i] - 'a']++;
        }

        for (int i = 0; i < n2; i++)
        {
            a[s2[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++)
            count = count + abs(a[i]);

        cout << count << endl;
    }

    return 0;
}