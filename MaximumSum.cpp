// Algorithm
// Linear search
// using STL

#include<bits/stdc++.h>
using namespace std;
#define fast_input  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
//Question::
//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/maximum-sum-4-f8d12458/description/?layout=old

int main(){
	
 	fast_input;
 	int size;
 	cin>>size;
 	int arr[size];
 	
	for(int i=0; i<size; i++) 
 		cin>>arr[i];
 	
	sort(arr,arr+size);
 	
	if(arr[size-1]<0) cout<< arr[size-1]<<" "<<"1";
 	
	else{
 		int count= 0, sum= 0;
 		for(int i=0; i<size; i++){
 			if(arr[i]>0){
 				sum=sum+arr[i];
 				count++;
			}
		}
		cout<<sum<<" "<<count;
	}
	return 0;
 }
 	/*
 	intput:
 	5
 	1 2 -4 -2 3
 	output:
 	6 3
	*/
