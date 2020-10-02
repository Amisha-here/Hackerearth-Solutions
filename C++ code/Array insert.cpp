#include <iostream>
using namespace std;
int main()
{
    long int n,q,q_type,x,y;
    cin>>n>>q;
    int a[n];
    for(long int i=0;i<n;i++)
        {
           cin>>a[i];
        }
    for(long int i=0;i<q;i++)
    {   long int sum=0;
        cin>>q_type>>x>>y;
        if(q_type==1)
        {
            a[x]=y;
        }
        else if(q_type==2)
        {
            if(x>=0&&x<n&&y>=0&&y<n)
            {
                for(long int j=x;j<=y;j++)
                {
                    sum+=a[j];
                }
            }
            else
            {
                sum=-1;
            }
            cout<<sum<<endl;
        }
    }
}
Language: C++
