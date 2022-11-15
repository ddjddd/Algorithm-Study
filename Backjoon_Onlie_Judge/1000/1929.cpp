#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int *p;
    int n, m;
    scanf("%d %d", &n, &m);
    if (m == 1)
        return 0;

    p = (int *)malloc(sizeof(int) * (m + 1));
    memset(p, 1, sizeof(int) * (m + 1));
    /*for(int i = 0; i <= m; i ++) {
		p[i] = 1;		
	}*/

    p[0] = p[1] = 0;
    for (int i = 4; i <= m; i += 2) {
        p[i] = 0;
    }

    for (int i = 3; i * i <= m; i++) {
        if (p[i]) {
            for (int j = i * i; j <= m; j += i) {
                p[j] = 0;
            }
        }
    }

    for (int i = n; i <= m; i++) {
        if (p[i])
            printf("%d\n", i);
    }

    return 0;
}