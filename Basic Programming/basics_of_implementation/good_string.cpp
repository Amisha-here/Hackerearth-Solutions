#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int a[26]={0};

    for(int i=0;i<s.length();i++)
    {
        a[s[i]-'a']++;
    }

    int count =0;
	for(int i=0; i<26; i++){
		if(a[i]>1){
			count += (a[i]-1);
		}
	}
	
	printf("%d",count);
	
	return 0;

}
