#include <stdio.h>

int main() {
    int input;
    scanf("%d", &input);
    int i = 0, ret = 1;
    for (i = input; i > 0; i--) {
        ret *= i;
    }
    printf("%d\n", ret);
    return 0;
}
