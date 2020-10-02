#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		long long int n; cin>>n;
		if(n==1) cout<<1<<"\n";
		else{
			// n--;
			long long int p=(n * (n - 1) / 2) - 1 + n / 2; 
			cout<<p<<"\n";
 
		}
	}
}
