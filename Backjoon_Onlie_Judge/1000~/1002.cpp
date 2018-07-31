#include <iostream>
#include <cmath>
using namespace std;

int main () {
	int tC; cin >> tC;
	for(int tc = 1; tc <= tC; tc++) {
		int x, y, d, xx, yy, dd, ddd;
		cin >> x >> y >> d >> xx >> yy >> dd;
		ddd = (xx-x)*(xx-x) + (yy-y)*(yy-y);
		double len = sqrt(ddd);
		
		double a, b, c;
		if(len >= d && len >= dd) {
			a = len;
			b = d;
			c = dd;
		}
		else if(d >= len && d >= dd) {
			a = d;
			b = len;
			c = dd;
		}
		else if(dd >= len && dd >= d){
			a = dd;
			b = len;
			c = d;
		}
		int ret = -2;
		if(x == xx & y == yy) {
			if(d == dd) ret = -1;
			else ret = 0;
		}
		else if(a > b+c) ret = 0;
		else if(a == b+c) ret = 1;
		else ret = 2;
		
		cout << ret << endl;
	}
}
