#include<bits/stdc++.h>
using namespace std;
int main()
{
    string r,g;
    getline(cin,r);
    getline(cin,g);
    int c=0;
    int i,j,s;
    s=0;
    for(i=0;i<g.size();i++)
    {
        if(g[i]!=32)
        {
        for(j=0;j<r.size();j++)
        {
            if(r[j]==g[i] || r[j]-g[i]==32 || g[i]-r[j]==32)
            {
                c++;
                r.erase(j,1);
                break;
            }
        }
        }
        if(g[i]==32)
        {
            s++;
        }
    }
    if(c==g.size()-s)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
