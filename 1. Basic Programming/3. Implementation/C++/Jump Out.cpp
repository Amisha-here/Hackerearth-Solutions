#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        if((a+i)>n)
        {
            cout<<i<<endl;
            break;
        }
    }
}
