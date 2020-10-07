// Write your code here
#include <iostream>
#include <string>

using namespace std;

int main() {
	// Read the string
	string s;
	cin >> s;

	if(s.at(s.length()-1) == '6'){
		cout << "-1";
		return 0;
	}

	int girls = 0;
	for(int i = 0; i < s.length(); i++){
		if(s.at(i) < '1' || s.at(i) > '6'){
			cout << "-1";
			return 0;
		}
		if(s.at(i) != '6'){
			girls++;
		}
	}

	cout << girls;

	return 0;
}
