#include <stdio.h>

int main () {
	long long zero = 0, one = 1;
	int cases;
	scanf("%d", &cases);

	for(int i = 1; i < cases; i++) {
		long long tz = 0, to = 0;
		tz = zero + one;
		to = zero;
		zero = tz;
		one = to;
	}

	printf("%lld\n", zero+one);

	return 0;
}