#include <stdio.h>

typedef long long ll;

int mtx[201][201] = {0, };

int main () {
	int i = 0;
	for(i; i < 201; i++) {
		mtx[i][0] = 1;
		mtx[1][i] = 1;	
	}
	int n, k;
	scanf("%d %d", &n, &k);
	for(i = 2; i <= k; i++) {
		int j = 0;
		for(j = 1; j <= n; j++) {
			int t;
			for(t = 0; t <= j; t++) {
				mtx[i][j] += mtx[i-1][t]%1000000000;
				mtx[i][j] %= 1000000000;
			}
		}
	}
	printf("%d\n", mtx[k][n]);
	return 0;
}
