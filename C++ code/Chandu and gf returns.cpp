#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
long int n,m,x;
cin>>t;
for(int i=0;i<t;i++)
{
    cin>>n>>m;
    vector<int>v1;
    vector<int>v2;
	
    for(long int j=0;j<n;j++)
    {
        cin>>x;
        v1.push_back(x);
    }
    for(long int j=0;j<m;j++)
    {
        cin>>x;
        v2.push_back(x);
    }
	sort(v1.begin(),v1.end(),greater<int>());
	sort(v2.begin(),v2.end(),greater<int>());
	vector<int>v3(v1.size()+v2.size());
    merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
	sort(v3.begin(),v3.end(),greater<int>());
    for(vector<int>:: iterator itr=v3.begin();itr!=v3.end();++itr)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
}

}
