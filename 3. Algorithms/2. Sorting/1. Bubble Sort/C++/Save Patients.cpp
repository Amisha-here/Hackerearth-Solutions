
//https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/save-patients/description/
#include<iostream>
using namespace std;
int main(){
	int n; cin>>n;
	int vacc[n],midcnt[n];
	for(int i=0;i<n;i++) cin>>vacc[i];
	for(int i=0;i<n;i++) cin>>midcnt[i];
	bool ok=1;
	for(int i=0;i<n;i++) if(vacc[i]<=midcnt[i]) ok=0;
	if(ok) cout<<"Yes\n";
	else cout<<"No\n";
}
