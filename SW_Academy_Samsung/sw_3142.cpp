#include <iostream>

using namespace std;

int main () {
	int tC; scanf("%d", &tC);
	for(int tc = 1; tc <= tC; tc++) {
		int n, m;
		scanf("%d %d", &n, &m);
		int a = m, b = m-a;
		for(a; a >=0; a--){
			b = m-a;
			if(2*a+b == n) break;
		}
		printf("#%d %d %d\n", tc, b, a);
	}
	return 0;
}
