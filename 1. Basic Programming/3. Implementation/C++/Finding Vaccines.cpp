#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int n, m;
	cin >> n; // # of vac
	cin >> m; // len of RNA str
	string r;

	cin >> r; // RNA str
	
	vector<string> vaccines;
	vector<int> vaccineLengths;
	for(int i = 0 ; i < n ; i++){
		int currentVacLen;
		cin >> currentVacLen;
		vaccineLengths.push_back(currentVacLen);
		string currentVac;
		cin >> currentVac;
		vaccines.push_back(currentVac);
	}

	int virusGCount = 0, virusCCount = 0;

	for(int i = 0 ; i < m; i++){
		if(r.at(i) == 'G') virusGCount++;
		else if(r.at(i) == 'C') virusCCount++;
	}

	int bestMatch = -1;
	int bestMatchIndex = 1;
	// Loop over all possible vaccines and check best match
	for(int i = 1 ; i < n; i++){
		int currentMatch = 0;
		for(int j = 0 ; j < vaccineLengths.at(i); j++){
			if(vaccines.at(i).at(j) == 'G') currentMatch += virusCCount;
			else if(vaccines.at(i).at(j) == 'C') currentMatch += virusGCount;
		}
		if(currentMatch > bestMatch){
			bestMatch = currentMatch;
			bestMatchIndex = i + 1;
		}
	}

	cout << bestMatchIndex;
	return 0;
}
