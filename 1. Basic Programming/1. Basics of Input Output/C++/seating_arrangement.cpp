#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    cin>>t;
    while(t--)
    {
        int s = 0;
        cin>>s;
        int win  = s%6;
        string wins = "";
        if(win == 1 || win == 0)
            wins = "WS";
        else if(win == 2 || win == 5)
            wins = "MS";
        else
            wins = "AS";
        int fron = s%12;
        if(fron == 0) 
            fron = 12;
        cout<<s+13-(2*fron)<<" "<<wins<<endl; 
    }
    return 0;
}
