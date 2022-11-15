#include <stdio.h>

int main() {
    int trial = 1;
    int input8;
    while (scanf("%1d", &input8) != EOF) {
        if (input8 == 0 && trial == 1) {
            printf("0");
            return 0;
        }

        if (trial == 1) {
            if (input8 / 4 == 1) {
                printf("1");
                input8 -= 4;
                trial++;
            }
            if (input8 / 2 == 1) {
                printf("1");
                input8 %= 2;
            } else if (trial == 2) {
                printf("0");
            }
            printf("%d", input8);
            trial++;
        } else {
            printf("%d", input8 / 4);
            input8 %= 4;
            printf("%d", input8 / 2);
            input8 %= 2;
            printf("%d", input8);
        }
    }

    return 0;
}
