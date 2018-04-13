#include <stdio.h>

int main () {
	int a[10] = {0, };
	for(int i = 1; i < 10; i++) {
		a[i] = 1;
	}
	int cases, ret;
	scanf("%d", &cases);
	for(int i = 1; i < cases; i++) {
		int t[10] = {0, }; ret = 0;
		for(int j = 0; j < 9; j++) {
			t[j] = a[j+1]%1000000000;
		}
		for(int j = 1; j < 10; j++) {
			t[j] += a[j-1]%1000000000;
		}
		for(int j = 0; j < 10; j++) {
			a[j] = t[j]%1000000000;
		}
	}

	for(int j = 0; j < 10; j++) {
		ret += a[j];
		ret %= 1000000000;
	}
	printf("%d\n", ret);
}