#include <stdio.h>

int main() {
    int cases;
    scanf("%d", &cases);

    for (int i = cases; i > 0; i--) {
        for (int j = cases - 1; j >= i; j--)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("*");
        for (int j = 2; j <= i; j++)
            printf("*");
        printf("\n");
    }
    for (int i = 2; i <= cases; i++) {
        for (int j = cases - 1; j >= i; j--)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("*");
        for (int j = 2; j <= i; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}