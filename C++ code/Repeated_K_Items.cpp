#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	map<long long,long long>m;
	for(int i=0;i<n;i++)
	{
		long long x;
		cin>>x;
		m[x]++;
	}
	long long k;
	cin>>k;
	map <long long, long long>::iterator it;
	for(it=m.begin();it!=m.end();it++)
	{
		if(it->second==k)
		{
			cout<<it->first;
			break;
		}
	}
}
