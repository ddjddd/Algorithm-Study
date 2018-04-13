#include <stdio.h>

int main () {
	long long m = 0, a, b, c;
	int rArr[10] = {0, };
	
	scanf("%lld %lld %lld", &a, &b, &c);
	m = a * b * c;
	
	while (m != 0) {
		int k = m%10;
		m /= 10;
		rArr[k]++;
	}
	int i;
	for(i = 0; i < 10; i++) printf("%d\n", rArr[i]);	
	
	return 0;
}
