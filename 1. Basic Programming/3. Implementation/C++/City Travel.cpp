#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main(){
	int s, x, n;
	cin >> s >> x >> n;

	map<int, int> exceptionalDays;

	for(int i = 0 ; i < n ; i++){
		int d, s;
		cin >> d >> s;
		exceptionalDays.insert(pair<int,int>(d, s));
	}

	int currentDay = 1;

	while(s > 0){
		if(exceptionalDays.count(currentDay) > 0){
			// This day exists in days vector
			s-= exceptionalDays.at(currentDay);
			// Remove key-value to reduce complexity
			exceptionalDays.erase(currentDay);
		}
		else{
			// Not an exceptional day
			s-= x;
		}
		if (s > 0)
			currentDay++;
	}

	cout << currentDay;
	return 0;
}