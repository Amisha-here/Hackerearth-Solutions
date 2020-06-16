#include <bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   cin>>s;
   string z="000000";
   string y="111111";
   int zz,yy;
   zz=s.find(z);
   yy=s.find(y);

   if(zz>=0 || yy>=0)
  { cout<<"Sorry, sorry!"<<endl; }
   else
 {cout<<"Good luck!"<<endl;
 }
}
