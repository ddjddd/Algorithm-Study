#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *arr;

void fib(int input) {
    if (input == 1) {
        arr[input] = 1;
    } else if (input == 2) {
        arr[input] = 3;
    } else {
        arr[input] = arr[input - 1] % 10007 + arr[input - 2] % 10007 + arr[input - 2] % 10007;
    }
}

int main() {
    int cases;
    scanf("%d", &cases);

    arr = (int *)malloc(sizeof(int) * (cases + 1));
    memset(arr, 0, sizeof(int) * (cases + 1));

    for (int i = 1; i <= cases; i++)
        fib(i);

    printf("%d\n", arr[cases] % 10007);

    return 0;
}