#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
#define loop(i,ct,n) for(int i=ct;i<n;i++)
int main()
{
   int n;
   cin>>n;
   long long int ar[n+1];
   int a[n+1],b[n+1];
   loop(i,1,n+1) cin>>ar[i];
   stack <int> s;
   s.push(1);
   loop(i,2,n+1)
   {
      while(!s.empty() && ar[s.top()]<ar[i])
      {
         a[s.top()]=i;
         s.pop();
      }
      s.push(i);
   }
   while(!s.empty()){
		a[s.top()] = -1;
		s.pop();
	}
   s.push(n);
   for(int i=n-1;i>0;i--)
   {
      while(!s.empty() && ar[s.top()]<ar[i])
      {
         b[s.top()]=i;
         s.pop();
      }
      s.push(i);
   }
   while(!s.empty()){
		b[s.top()] = -1;
		s.pop();
	}
 
    
   
 
   loop(i,1,n+1) cout<<a[i]+b[i]<<" ";
   cout<<endl;
 
   return 0;
}