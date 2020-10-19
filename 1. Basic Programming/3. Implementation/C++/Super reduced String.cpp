#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#define loop(i,ct,n) for(int i=ct;i<n;i++)
using namespace std;
int main()
{
    string str;
    cin>>str;
    reverse(str.begin(),str.end());
    stack <char> st;
    int l=str.length();
    bool flag=false;
    loop(i,0,l)
    {
        if(st.empty()){st.push(str[i]);flag=true;}
        else if(flag)
        {
            if(st.top()==str[i]) {st.pop();flag=false;}
            else st.push(str[i]);
 
        }else{st.push(str[i]);flag=true;}
    }
    if(st.empty()) cout<<"Empty String"<<endl;
    else
    {
        while (!st.empty()) {
            cout<<st.top();
            st.pop();
        }
    }
 
    return 0;
}