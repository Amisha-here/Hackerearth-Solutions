#include <bits/stdc++.h>
using namespace std;

int main()
{ long long d, oc,of,od,cs,cb,cm;
long long cd;
long cost_online,cost_offline;

 cin>>d;
 cin>>oc>>of>>od;
 cin>>cs>>cb>>cm>>cd;

 cost_online=  oc+(d-of)*(od)  ;
 cost_offline= (cb+((d/cs)*(cm))+((d)*(cd)));


 if(cost_offline>=cost_online)
 cout<<"Online Taxi";
 else
 cout<<"Classic Taxi";


}
