#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;

	int max = 1;
	int current = 1;
	char lastChar = s.at(0);
	for(int i = 1 ; i < s.length(); i++){
		char currentChar = s.at(i);
		if(lastChar != currentChar){
			current += 1;
		}
		else{
			if(current > max) max = current;
			current = 1;
		}
		lastChar = currentChar;
	}

	if(current > max) max = current;

	cout << max;

	return 0;
}