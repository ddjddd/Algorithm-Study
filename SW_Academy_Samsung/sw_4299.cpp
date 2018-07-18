#include <iostream>

using namespace std;

int main() {
	int tC; scanf("%d", &tC);
	for(int tc = 1; tc <= tC; tc++) {
		int d, h, m;
		scanf("%d %d %d", &d, &h, &m);
		int ret;
		if(d < 11) ret = -1;
		else if (d == 11 && h < 11) ret = -1;
		else if (d == 11 && h == 11 && m < 11) ret = -1;
		else {
			if(m < 11) {
				h--; m+=60; m-=11;
			}
			else m-= 11;
			if(h == 0) {
				h = 24; d--;
			}
			if(h < 11) {
				d--; h+=24; h-=11;
			}
			else h-=11;
			d-=11;
			ret = 24*60*d + 60*h + m;
		}
		printf("#%d %d\n", tc, ret);
	}
	return 0;
}
