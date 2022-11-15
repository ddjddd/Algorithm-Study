#include <stdio.h>

int main() {
    long long input, temp = 1;
    scanf("%lld", &input);
    int ret = 0;
    while (input > temp) {
        ret++;
        temp += 6 * ret;
    }
    ret++;
    printf("%d\n", ret);
    return 0;
}
