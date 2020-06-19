#include <bits/stdc++.h>
using namespace std;
int main()
{
    long a,b,c;
    cin>>a>>b>>c;

    if((b-a)%c==0 && (b-a)/c>0)
    cout<<"YES";
    else
    cout<<"NO";
}
