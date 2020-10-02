#include<bits/stdc++.h>
using namespace std;
long long count(long long n)
{
long long c=0;
while(n)
{
n=n&(n-1);
c++;
}
return c;
}
int main()
{
long long t;
cin>>t;
while(t--)
{
long long n;
cin>>n;
cout<<count(n)<<endl;
}
}
