// https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/strings-1/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       string s1,s2;
       cin>>s1>>s2;

     if(s1==s2 || (s1=="2" && s2=="4") || (s1=="4" && s2=="2"))
      cout<<"YES\n";
        else
        cout<<"NO\n";
      
    }
}
