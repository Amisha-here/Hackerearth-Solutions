#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long a[n];

    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];

        if(a[i]>(n-i))
        {
           
            cout<<i;
            break;
        }
    }
}
