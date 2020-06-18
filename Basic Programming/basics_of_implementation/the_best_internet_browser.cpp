#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;

  while(t--)
  {
     string s;
     cin>>s;
     int l=s.length();
     int count=0;
     int x=l-4;
     for(int i=0;i<l;i++)
     {
if(s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')  
count++;
     } 

     cout<<x-(count-1)<<"/"<<l<<endl;
  }

}
             
