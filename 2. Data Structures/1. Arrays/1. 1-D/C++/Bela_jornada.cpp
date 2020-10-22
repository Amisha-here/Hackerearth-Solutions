#include<bits/stdc++.h>
using namespace std;

long long int fun(int ar[],int n){
    vector<long long int>a;
    long long int sum=0,x=0,y=0;
    for(int i=0;i<n;i++)
    sum+=ar[i];
    for(int i=0;i<n;i++){
        y=y+ar[i];
        x=sum-y;
        a.push_back(x*y);
    }
    return(*max_element(a.begin(),a.end()));
}
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    cin>>ar[i];
    cout<<fun(ar,n);
}
