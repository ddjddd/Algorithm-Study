#include <iostream>

using namespace std;

int main () {
	int ret = 0;
	for(int i = 0; i < 5; i++) {
		int t; cin >> t;
		ret += t*t;
	}
	cout << ret %10 << endl;
}
