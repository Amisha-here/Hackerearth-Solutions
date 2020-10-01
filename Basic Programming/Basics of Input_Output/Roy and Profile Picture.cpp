/*
@Nitish-Awasthi
*/


#include<bits/stdc++.h>
using namespace std;
int main(){
    int L,W,H,N;
    cin>>L;
    cin>>N;
    int A[N][2];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>A[i][j];
        }
        if(A[i][0]<L||A[i][1]<L)
        {
            cout<<"UPLOAD ANOTHER"<<endl;
        }
        else if(A[i][0]>=L&&A[i][1]>=L&&A[i][0]!=A[i][1])
        {
            cout<<"CROP IT"<<endl;
        }
        else if(A[i][0]==A[i][1]&&A[i][0]>=L&&A[i][1]>=L)
        {
            
            cout<<"ACCEPTED"<<endl;
        }
        
    }
    return 0;
}
