#include <stdio.h>
#include <math.h>

long long func(long long n) {
	if (n == 1) return 1;
	else {
		return func(n-1) + n*2;
	}
}

int main () {
	int cases;
	long long x, y, dist;
	scanf("%d", &cases);
	
	while (cases > 0) {
		scanf("%d %d", &x, &y);
		dist = y - x;
		if (dist < 4) printf("%d\n", dist);
		else {
			unsigned r = ceil(sqrt(dist));
			long long temp = r*r;
			if(dist >= temp - r + 1) printf("%d\n", r * 2 - 1);
			else printf("%d\n", r * 2 - 2);
		}
		cases--;
	}
	return 0;
}
