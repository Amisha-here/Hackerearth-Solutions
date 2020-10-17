#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0;
    cin>>n;
    int i = 1,s = 3;
    while(n>=s)
    {
        i += 1;
    s = 3*((i*(i+1))/2);
    }
    i -= 1;
   int n_left = n - (3*((i*(i+1))/2));
if(n_left >= i+1)
    cout<<"Motu";
else
    cout<<"Patlu";

}
