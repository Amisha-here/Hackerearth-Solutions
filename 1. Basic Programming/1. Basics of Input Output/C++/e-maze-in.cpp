#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "";
    cin>>s;
    int l = s.size();
    int x = 0, y = 0;
    for(int i = 0;i<l;i++)
    {
        if(s[i] == 'L')
            x -=1;
        else if(s[i] == 'R')
            x += 1;
        else if(s[i] == 'U')
            y +=1;
        else
            y -= 1;

    }
        cout<<x<<" "<<y; 
}
