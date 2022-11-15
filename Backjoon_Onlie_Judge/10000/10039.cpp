#include <stdio.h>

int main() {
    int input, i, ret = 0;
    for (i = 0; i < 5; i++) {
        scanf("%d", &input);
        input > 40 ? ret += input : ret += 40;
    }
    ret /= 5;
    printf("%d\n", ret);
    return 0;
}
