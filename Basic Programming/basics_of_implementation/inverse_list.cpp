#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,q,l,i;
    char s[100000];
    cin>>t;
    while(t--)
    {
        cin>>s;
        cin>>q;
        l=strlen(s);
        for(i=0;i<l&&q!=0;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                s[i]++;
                q--;
            }
        }
        cout<<s<<endl;
    }
}
  
