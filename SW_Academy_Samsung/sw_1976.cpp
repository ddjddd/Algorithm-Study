#include <iostream>

using namespace std;

int main () {
	int tC; cin >> tC;
	for(int tc = 1; tc <= tC; tc++) {
		int ah, am, bh, bm;
		cin >> ah >> am >> bh >> bm;
		int rh = 0, rm;
		rm = am+bm;
		rh = rm/60;
		rm %= 60;
		rh += ah + bh;
		rh %= 12;
		rh = rh == 0? rh+12: rh;
		printf("#%d %d %d\n", tc, rh, rm);
		
	}
	return 0;
}
