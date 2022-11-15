#include <stdio.h>

long long arr[91] = {
    0,
    1,
    0,
};

void fib() {
    int i = 2;
    for (i; i < 91; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
}

int main() {
    int input;
    scanf(" %d", &input);
    fib();
    printf("%lld\n", arr[input]);
    return 0;
}
