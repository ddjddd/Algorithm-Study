#include <iostream>

using namespace std;

int pow(int n, int m) {
	if(m == 1) return n;
	return n*pow(n, m-1);
}

int main () {
	int tC; tC = 10;
	for(int tc = 1; tc <= tC; tc ++) {
		int dummy; scanf("%d", &dummy);
		int n, m; scanf("%d %d", &n, &m);
		printf("#%d %d\n", tc, pow(n, m));
		
	}
	return 0;
}
