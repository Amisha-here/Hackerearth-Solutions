#include<iostream>
#include<string>
int main(){
	int n;
	std::string s1,s2,ans="YES";
   	std::cin>>n>>s1>>s2;
   	int a[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
   	for(int i=0;i<n;i++){
	   	a[s1[i]-'a']++;
	   	a[s2[i]-'a']--;
   	}
   	for(int i=0;i<26;i++)
		if(a[i]){
			ans="NO";
			break;
		}
	std::cout<<ans;
	return 0;
}
