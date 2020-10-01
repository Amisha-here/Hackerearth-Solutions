#include<bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin>>S;
    int i,w;
    int f[26]={0};
    for(i=0;i<S.size();i++)
    {
        f[S[i]-97]++;
    }
    w=0;
    for(i=0;i<26;i++)
    {
        w=w+(f[i]*(i+1));
    }
    printf("%d",w);
}
