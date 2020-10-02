#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
string t,s;
for(int i=0;i<n;i++)
 {
    cin>>t>>s;
    unordered_map<char,int>t1;
    unordered_map<char,int>s1;

    for(int j=0;j<t.length();j++)
    {
        if(t1.find(t[j])==t1.end())
        {
            t1.insert(make_pair(t[j],1));
        }
        else
        {
            t1[t[j]]++;
        }
    }
    for(int j=0;j<s.length();j++)
    {
        if(s1.find(s[j])==s1.end())
        {
            s1.insert(make_pair(s[j],1));
        }
        else
        {
            s1[s[j]]++;
        }
    }
     
    int ans=0;
    for(auto itr=t1.begin();itr!=t1.end();++itr){
        if(s1.find(itr->first)!=s1.end())
        {
            ans+=abs(itr->second-s1.find(itr->first)->second);
        }
        else
        {
            ans+=itr->second;
        }
    }
    for(auto itr=s1.begin();itr!=s1.end();++itr)
    {
        if(t1.find(itr->first)==s1.end())
        {
            ans+=itr->second;
        }
        else
        {
            ans+=0;
        }
    }

    cout<<ans<<endl;
 }

}
