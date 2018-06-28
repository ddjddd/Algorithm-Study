#include <iostream>

using namespace std;

int main () {
	int c;
	cin >> c;
	int sum = 0;
	while (c) {
		sum += c % 10;
		c/=10;
	}
	cout << sum;
	return 0;
}
