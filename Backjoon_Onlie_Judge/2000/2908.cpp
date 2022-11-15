#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int i = 0;
    a = a % 10 * 100 + (a / 10 % 10) * 10 + a / 100;
    b = b % 10 * 100 + (b / 10 % 10) * 10 + b / 100;
    (a < b) ? a = b : a;
    printf("%d\n", a);

    return 0;
}
