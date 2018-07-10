#include <iostream>

using namespace std;

int main () {
	int tC; cin >> tC;
	int day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	for(int tc = 1; tc <= tC; tc++) {
		int am, ad, bm, bd, ret = 0, t = 0;
		cin >> am >> ad >> bm >> bd;
		if(am > bm || (am == bm && ad > bd)) {
			t = am;
			am = bm;
			bm = t;
			t = ad;
			ad = bd;
			bd = t;
		}
        
		for(int i = am; i < bm; i++) {
			ret += day[i-1];
		}
		ret += bd - ad + 1;
		
		if(t) ret = 366-ret;
		printf("#%d %d\n", tc, ret);
	}
	return 0;
}
