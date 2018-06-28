#include <iostream>

using namespace std;

int main () {
	int a, b;
	cin >> a >> b;
	if (a < b) {
		if(b-a > 1) cout << 'A';
		else cout << 'B';
	}
	else {
		if(a-b > 1) cout << 'B';
		else cout << 'A';
	}
	return 0;
}
