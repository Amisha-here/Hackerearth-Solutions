#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        long long x;
        cin>>x;
        long long s=0,p=x+1,d,q;
        while(s+1<p)
        {
            d=(s+p)/2;
            q=x/d;
            if(q>d&&(q^d)>d)
            {
                s=d;
            } 
            else
            {
                p=d;
            }
        }
        cout<<x-s<<'\n';
    }
    return 0;
}
