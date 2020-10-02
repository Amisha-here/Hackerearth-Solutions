#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define ve vector<int>
#define vl vector<long long int>
#define pb push_back
#define fo(i,a,n) for(i=a;i<n;i++)

int main()
{
    ll n;
    cin>>n;
    ll xo=0;
    for(ll i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        xo^=a;
    }
    if(xo==0) cout<<"-1"<<endl;
    else cout<<"1"<<endl;
}
