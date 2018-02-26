#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int checkDigit(long long input) {
	int ret = 0;
	while(input != 0) {
		input /= 10;
		ret++;
	}
	return ret;
}

int main () {
	long long aaa = 0, bbb = 0;
	
	long long a, b, c, d;
	scanf(" %lld %lld %lld %lld", &a, &b, &c, &d);
	
	int t = checkDigit(b);
	int i = 0;
	for(i; i < t; i++) {
		a *= 10;
	}
	aaa = a + b;
	t = checkDigit(d);
	for(i = 0; i < t; i++) {
		c *= 10;
	}
	bbb = c + d;
	
	printf("%lld\n", aaa+bbb);
	
	return 0;
}
