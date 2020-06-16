#include<bits/stdc++.h>
using namespace std;
string day_index(int x){
    switch(x){
        case 0: return "MONDAY";
        case 1: return "TUESDAY";
        case 2: return "WEDNESDAY";
        case 3: return "THURSDAY";
        case 4: return "FRIDAY";
        case 5: return "SATURDAY";
        case 6: return "SUNDAY";
        default: return "xxxxx";
    }
}
int main()
{
    long t,k;
    long a[6];
    cin>>t;

    while(t--)
    {
        cin>>k;
        long long sum=0;
        for(int i=0;i<7;i++)
        { cin>>a[i];
            sum+=(a[i]);
         }
        k=k%sum;
        //cout<<k<<"\n";
        int last_index;
        if(k==0){
            for(int i=0;i<7;i++){
                if(a[i]>0){
                    last_index=i;
                }
            }
            //cout<<"last index = "<<last_index<<endl;
            cout<<day_index(last_index)<<"\n";
        }
        else{
            int temp=0;
            while(k>0){
                k=k-a[temp];
                temp++;
            }
            temp--;
            cout<<day_index(temp)<<"\n";
        }
        
    }

}
