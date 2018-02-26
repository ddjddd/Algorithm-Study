#include <stdio.h>

int table[1001][1002] = {0, };

void dp(int n, int k) {
	table[1][0] = table[1][1] = 1;
	for(int i = 2; i <= n; i++) {
		table[i][0] = table[i][i] = 1;
		for (int j = 1; j < i; j++) {
			table[i][j] = table[i-1][j-1]%10007 + table[i-1][j]%10007;
		}
	}
}

int main () {
	int n, k;
	scanf("%d %d", &n, &k);
	dp (n, k);

	printf("%d\n", table[n][k]%10007);
	return 0;
}