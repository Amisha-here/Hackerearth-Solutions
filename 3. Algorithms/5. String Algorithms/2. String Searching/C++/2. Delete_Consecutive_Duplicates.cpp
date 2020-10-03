#include<bits/stdc++.h>
using namespace std;

string removeduplicate(string word){
  string ans="";
  int l=word.length();
  for(int i=0;i<l-1;i++){
    if(word[i]!=word[i+1]){
      ans=ans+word[i];
    }
  }
  if(word[l-1]!=word[l-2]){
    ans=ans+word[l-1];
  }

  return ans;
}

int main(){
  string word,ans;
  cin>>word;
  ans=removeduplicate(word);
  cout<<ans<<endl;


}
