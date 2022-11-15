#include <cstdio>
#include <iostream>

int main() {
    int cases;
    scanf("%d", &cases);
    for (int i = 0; i < cases; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
    return 0;
}
