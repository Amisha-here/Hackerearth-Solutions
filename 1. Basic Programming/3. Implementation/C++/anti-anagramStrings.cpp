#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        long long int i,flag=0;
        for(i=0;i<s.length()-1;i++)
        {
            if(s[i]!=s[i+1])
            {
                flag=1;
                break;
            }
        }

        if(flag==0)
            cout<<-1<<endl;
        else
            {
            sort(s.begin(),s.end());
            cout<<s<<endl;
            }
    }
    return 0;
}
