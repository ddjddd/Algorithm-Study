#include <stdio.h>

int fac(int input) {
    int ret = 1;
    int i = 0;
    for (i = input; i > 0; i--) {
        ret *= i;
    }
    return ret;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int ret = fac(n) / (fac(k) * fac(n - k));

    printf("%d\n", ret);

    return 0;
}