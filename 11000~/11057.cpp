#include <stdio.h>

int main () {
	int a[10], cases;
	scanf("%d", &cases);
	for (int i = 0; i < 10; ++i) {
		a[i] = 1;
	}

	for(int c = 1; c < cases; c++) {
		for(int i = 0; i < 10; i++) {
			int t = 0;
			for(int j = i; j < 10; j++) {
				t += a[j];
				t %= 10007;
			}
			a[i] = t;
		}
	}

	int ret = 0;
	for (int i = 0; i < 10; ++i) {
		ret += a[i];
		ret %= 10007;
	}
	printf("%d\n", ret);

	return 0;
}