#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h> 

using namespace std;

int main(){
	int n;
	string str;

	cin >> n;
	cin >> str;

	string s = "hackerearth";
	// h 2
	// a 2
	// c 1
	// k 1
	// e 2
	// r 2
	// t 1
	vector<char> givenNeededChars(str.begin(), str.end());
	vector<int> foundChars;
	vector<char> uniqueChars = {'h', 'a', 'c', 'k', 'e', 'r', 't'};

	for(auto& c: uniqueChars){
		int foundOcc = count(givenNeededChars.begin(), givenNeededChars.end(), c);
		if(c == 'h' || c == 'a' || c == 'e' || c == 'r'){
			foundOcc = foundOcc / 2;
		}
		foundChars.push_back(foundOcc);
	}

	// Find the minimum element
	int foundMin = INT_MAX;
	for(auto& e: foundChars)
		if(e < foundMin)
			foundMin = e;
	cout << foundMin;
	return 0;

}