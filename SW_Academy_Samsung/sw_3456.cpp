#include <iostream>

using namespace std;

int main () {
	int tC; scanf("%d", &tC);
	for(int tc = 1; tc <= tC; tc++) {
		int a, b, c, ret;
		scanf("%d %d %d", &a, &b, &c);
		if(a == b) ret = c;
		else {
			if(a == c) ret = b;
			else ret = a;
		}
		printf("#%d %d\n", tc, ret);
	}
	return 0;
}
