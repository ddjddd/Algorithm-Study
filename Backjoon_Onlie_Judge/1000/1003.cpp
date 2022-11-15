#include <cstdio>
#include <iostream>

int main() {
    int cases;
    scanf("%d", &cases);

    int arr0[41] = {
        1,
        0,
    };
    int arr1[41] = {
        0,
        1,
    };
    for (int i = 2; i < 41; i++) {
        arr0[i] = arr0[i - 1] + arr0[i - 2];
        arr1[i] = arr1[i - 1] + arr1[i - 2];
    }

    for (int i = 0; i < cases; i++) {
        int a;
        scanf("%d", &a);
        printf("%d %d\n", arr0[a], arr1[a]);
    }
    return 0;
}
