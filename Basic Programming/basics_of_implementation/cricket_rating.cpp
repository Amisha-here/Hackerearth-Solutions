#include <iostream>
#include <cmath>
using namespace std;
int main(){
int n,p=0,r=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
cin>>a[i];
p+=a[i];
if(p<0)
p=0;
else{
if(p>r)
r=p;
}
}
cout<<r;
return 0;
}
