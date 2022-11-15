#include <stdio.h>

int main(int argc, char **argv) {
    int cases, sum = 0, input;
    scanf("%d", &cases);
    for (; cases > 0; cases--) {
        scanf("%1d", &input);
        sum += input;
    }
    printf("%d", sum);
    return 0;
}
