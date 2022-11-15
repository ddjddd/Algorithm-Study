#include <stdio.h>

int main() {
    int cases, a, b;
    scanf("%d", &cases);
    for (int i = 1; i <= cases; i++) {
        for (int k = cases - i; k > 0; k--) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}