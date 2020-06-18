#include<iostream>
#include<cmath>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	long n;
	std::cin >> n;
	int s = std::sqrt(n);
	while (n % s)
		s--;
	std::cout << (s + (n / s));
	return 0;
}
