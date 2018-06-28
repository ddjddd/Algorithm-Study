#include <iostream>

using namespace std;

int main () {
	int c;
	cin >> c;
	for(int t = 0; t < c; t++) {
		int p, q, r, s, w;
		cin >> p >> q >> r >> s >> w;
		int a, b;
		a = p * w;
		b = w > r? q + (w-r) * s: q;
		int k = a > b? b : a;
		printf("#%d %d\n", t+1, k);
	}
	return 0;
}
