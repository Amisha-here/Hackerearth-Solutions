#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  getline(cin,s);
  int count=0,i;

 
  for(i=0;i<s.length();i++)
  {
      if(s[i]==s[i+1])
      count++;
  }


  cout<<count;

}
