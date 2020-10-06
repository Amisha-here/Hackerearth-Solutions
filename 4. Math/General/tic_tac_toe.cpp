#include <bits/stdc++.h>

#define ll long long

ll M = 1000000007;

 

using namespace std;
 

ll extendedGCD(ll a, ll b, ll *x, ll *y)

{

if(a == 0)

{

*x = 0;

*y = 1;

return b;

}

ll gcd, x1, y1;

gcd = extendedGCD(b%a, a, &x1, &y1);

*x = y1 - (b/a) * x1;

*y = x1;

return gcd;

}

 

ll modInverse(ll A, ll M)

{

ll x, y, gcd;

gcd = extendedGCD(A, M, &x, &y);

return (x%M + M)%M;

}

 

int main()

{

ios_base::sync_with_stdio(false);

cin.tie(NULL);

ll t;

cin>>t;

while(t--)

{

ll n, minx, maxx, matches, q;

cin>>n;

//matches = ((n*(n-1))%M / 2)%M;

//matches = n*(n-1)/2;

//q = matches / n;

//minx = (q * q * n)

//maxx = n*(n-1)*(2n-1)/6;

minx = (n%M * (n-1)%M * (n-1)%M * modInverse(4, M)%M)%M;

maxx = (n%M * (n-1)%M * (2*n - 1)%M * modInverse(6, M)%M)%M;

cout<<minx<<" "<<maxx<<"\n";

}

}
