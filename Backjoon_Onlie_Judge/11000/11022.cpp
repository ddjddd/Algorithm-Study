#include <stdio.h>

int main() {
    int cases, a, b;
    scanf("%d", &cases);
    for (int i = 0; i < cases; i++) {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d + %d = %d\n", i + 1, a, b, a + b);
    }
    return 0;
}