#include <stdio.h>

int main() {
    int cases;
    scanf("%d", &cases);
    for (int i = 0; i < cases; i++) {
        int t, tt;
        scanf("%d %d", &t, &tt);
        printf("%d\n", t + tt);
    }
    return 0;
}