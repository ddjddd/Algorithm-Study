#include <iostream>

using namespace std;

int main () {
	int c;
	cin >> c;
	for(int t = 0; t < c; t++) {
		int m = 0;
		for(int i = 0; i < 10; i++) {
			int k = 0;
			cin >> k;
			m = max(m, k);
		}
		printf("#%d %d\n", t+1, m);
	}
	return 0;
}
