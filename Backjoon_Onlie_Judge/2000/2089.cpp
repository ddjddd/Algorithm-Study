#include <stdio.h>

void func(int n) {
    if (n == 0)
        return;
    if (n % 2 == 0) {
        func(-(n / 2));
        printf("0");
    } else {
        if (n > 0)
            func(-(n / 2));
        else
            func(-(n - 1) / 2);
        printf("1");
    }
}

int main() {
    int input;
    scanf("%d", &input);

    if (input == 0)
        printf("0");
    else
        func(input);

    printf("\n");
    return 0;
}
