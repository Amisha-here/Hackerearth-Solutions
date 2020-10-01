#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int x;
	cin>>x;
	int lo=0, high=n-1;

	while(lo < high){
		int mid = (lo + high) / 2;
		if(arr[mid] > x){
			high = mid - 1;
		} else if(arr[mid] < x){
			lo = mid + 1;
		} else {
			cout<<mid;
			return 0;
		}
	}
	cout<<"-1";
	return 0;
}
