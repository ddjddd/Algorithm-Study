#include <stdio.h>

int main() {
    int cases, a, b;
    scanf("%d", &cases);
    for (; cases > 0; cases--) {
        scanf("%d, %d", &a, &b);
        printf("%d\n", a + b);
    }
    return 0;
}
