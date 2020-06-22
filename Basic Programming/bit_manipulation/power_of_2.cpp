#include <iostream>
#include<cmath>
using namespace std;
bool isPowerOfTwo(long long n) 
{ 
   if(n==0) 
   return false; 
  
   return (ceil(log2(n)) == floor(log2(n))); 
} 
int main()
{
  long long n;
  cin>>n;
  long long temp;
  long long count=0;
  while(n--)
  {
      cin>>temp;
      if(isPowerOfTwo(temp))
        count++;

  }   
  cout<<count;

}
