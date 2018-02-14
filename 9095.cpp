#include <stdio.h>

int main () {
	int a[12];
	a[1] = 1;
	a[2] = 2;
	a[3] = 4;
	for(int i = 4; i < 12; i++) {
		a[i] = a[i-1] + a[i-2] + a[i-3];
	}

	int cases;
	scanf("%d", &cases);
	for(int i = 0; i < cases; i++) {
		int t;
		scanf("%d", &t);
		printf("%d\n", a[t]);
	}

	return 0;
}