#include <iostream>
#include <string>
#include <stack>
using namespace std;
#define loop(i,ct,n) for(int i=ct;i<n;i++)
/*
* This programm cheq balanced brackets (,),{,},[ and ].
* by 256 Bit
*/
void solve()
{
   string st;
   cin>>st;
   int l=st.length();
   stack <char> brackets;
   loop(i,0,l)
   {
      if(st[i]=='[' || st[i]=='{' || st[i]=='(' ) brackets.push(st[i]);
      else if(st[i]==')' )
      {
         if(!brackets.empty() && brackets.top()=='(') brackets.pop();
         else {
            cout<<"NO"<<endl;
            return;
         }
      }else if (st[i]==']')
      {
          if(!brackets.empty() && brackets.top()=='[') brackets.pop();
         else {
            cout<<"NO"<<endl;
            return;
         }
      }else
       {
          if(!brackets.empty() && brackets.top()=='{') brackets.pop();
         else {
            cout<<"NO"<<endl;
            return;
         }
       }
   }
   if(brackets.empty()) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
}
int main()
{
   int t;
   cin>>t;
   while(t--) solve();
   return 0;  
}