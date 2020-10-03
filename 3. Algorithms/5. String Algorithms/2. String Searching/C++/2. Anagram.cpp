#include<bits/stdc++.h>
using namespace std;

bool anagram(string s1,string s2)
{
    unordered_map<char,int> map;
    for(char c:s1)
    {
        map[c]+=1;
    }
    for(char c:s2)
    {
        map[c]-=1;
    }
    for(auto it=map.begin();it!=map.end();it++)
    {
        if(it->second!=0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    bool ans=anagram(s1,s2);
    cout<<ans;
}
