#include <cstdio>
#include <cstdlib>
#include <iostream>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    char c[50][50];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf(" %c", &c[i][j]);
        }
    }
    int count = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (j < n - 2 && c[i][j] == '.' && c[i][j + 1] == '.' && c[i][j + 2] == '.') {
                if (j == 0 || c[i][j - 1] == '#') {
                    c[i][j] = 'x';
                    count++;
                }
            }
            if (i < m - 2 && c[i][j] == '.' && c[i + 1][j] == '.' && c[i + 2][j] == '.') {
                if (i == 0 || c[i - 1][j] == '#') {
                    c[i][j] = 'x';
                    count++;
                }
            }
        }
    }

    printf("%d\n", count);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (c[i][j] == 'x') {
                printf("%d %d\n", i + 1, j + 1);
            }
        }
    }

    return 0;
}
