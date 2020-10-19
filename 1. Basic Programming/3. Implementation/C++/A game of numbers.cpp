include<iostream>
#include<stack>
using namespace std;
#define loop(i,ct,n) for(int i=ct;i<n;i++)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    unsigned long long int ar[n+1];
    int a[n+1],b[n+1];
    loop(i,1,n+1) cin>>ar[i];
    stack <int> s;
    s.push(1);
    // 3 7 1 7 8 4 5 2
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
    loop(i,1,n+1)if(a[i]!=-1)loop(j,a[i],n+1) if(ar[a[i]]>ar[j]) { a[i]=j;break;}
    loop(i,1,n+1) if(a[i]!=-1) {cout<<ar[a[i]]<<" ";}else cout<<-1<<" ";
    cout<<endl;
 

    return 0;
}