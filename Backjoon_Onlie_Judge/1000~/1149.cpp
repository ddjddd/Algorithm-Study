#include <stdio.h>

int main () {
	int input = 0;
	scanf("%d", &input);

	int r0, g0, b0, tr, tg, tb;
	scanf("%d %d %d",  &r0, &g0, &b0);
	for (int i = 1; i < input; i++) {
		tr = r0; tg = g0; tb = b0;
		int r, g, b;		
		scanf("%d %d %d", &r, &g, &b);
		r0 = tg>tb ? tb + r : tg + r;
		g0 = tr>tb ? tb + g : tr + g;
		b0 = tr>tg ? tg + b : tr + b;
	}
	int ret;
	ret = r0>g0 ? g0 : r0;
	ret = ret>b0 ? b0 : ret;
	printf("%d\n", ret);

	return 0;
}