#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l  = 0, r = 0, k = 0;
    cin>>l>>r>>k;
    int count = 0;

    for(int i = l;i<=r;i++)
            if(i%k==0)
                count += 1;
    cout<<count;
}
