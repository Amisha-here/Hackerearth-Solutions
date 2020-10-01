#include<iostream>
using namespace std;
int main(){
	char a;
	int ch=0,spaces=0,num=0;
	a = cin.get();
	while(a != '$'){
		if(a >= 'a' && a <= 'z'){
			ch++;
		} else if(a >= '0' && a <= '9'){
			num++;
		} else if(a == ' ' || a == '\t' || a == '\n'){
			spaces++;
		}
		a = cin.get();
	}
	cout<<ch<<" "<<num<<" "<<spaces;
}
