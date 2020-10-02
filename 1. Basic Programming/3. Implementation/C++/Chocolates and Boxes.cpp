#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t,n;
  cin>>t;

  while(t--)
  {
    cin>>n;
    int a[n],k,count=0;
    unordered_set<int> s;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>k;
    unordered_map<int, int> m; 
    for (int i=0; i<n; i++) 
        m[a[i]]++; 
    for (int i=0; i<n; i++) 
    { 
        count += m[k-a[i]]; 
        if (k-a[i] == a[i]) 
            count--; 
    } 

    cout<<(count/2)<<endl;
  }
}
