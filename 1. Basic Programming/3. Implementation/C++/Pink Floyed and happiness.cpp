#include <iostream>
#include <algorithm>
#include <stack>
#define loop(i,ct,n) for(int i=ct;i<n;i++)
using namespace std;
int main()
{
   int n;
   cin>>n;
   int ar[n];
   loop(i,0,n) cin>>ar[i];
   int st=1;
   stack <int> s;
   loop(i,0,n)
   {
      if(st>n) break;
      if(st==ar[i])
      {
         st++;
         while(!s.empty() && s.top()==st){ st++;s.pop();}
         
      }
      else
      {
         if(!s.empty())
         {
            int flag=1;
            while(!s.empty() && s.top()==st){ flag=0;st++;s.pop();}
            if(flag) s.push(ar[i]);
                
         }else s.push(ar[i]);
      }
   }
   while(!s.empty() && s.top()==st){ st++;s.pop();}
   if(s.empty()) cout<<"Happy"<<endl;
   else cout<<"Sad"<<endl;
   
 
   return 0;
}