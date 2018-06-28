#include <iostream>

using namespace std;

int main () {
	int c;
	cin >> c;
	for(int t = 0; t < c; t++) {
		int sum = 0;
		for(int i = 0; i < 10; i++) {
			int k;
			cin >> k;
			sum += k;
		}
		printf("#%d %d\n", t+1, (sum+5)/10);
	}
	return 0;
}
