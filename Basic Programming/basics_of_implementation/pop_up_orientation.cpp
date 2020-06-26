#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,l,m,a,b;
        cin>>x>>y>>l>>m>>a>>b;

        if (m <= b) {
            if (l <= (x - a)) cout << "bottom-right" << endl;
            else cout << "bottom-left" << endl;
        }
        else {
            if (l <= (x - a)) cout << "top-right" << endl;
            else cout << "top-left" << endl;

    }
    }
  
}
