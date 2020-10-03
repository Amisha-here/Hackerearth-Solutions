#include<bits/stdc++.h>
using namespace std;
#define MAX 26

int main()
{
    string s1;
    cin>>s1;
    bool is_present[MAX]={false};
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]>='a' && s1[i]<='z')
        {
            is_present[s1[i]-'a']=true;
        }
        if(s1[i]>='A' && s1[i]<='Z')
        {
            is_present[s1[i]-'A']=true;
        }
    }
    string ans="";
    for(int i=0;i<MAX;i++)
    {
        if(is_present[i]==false)
        {
            ans.push_back((char)(i+'a'));
        }
    }
    cout<<ans;
}
