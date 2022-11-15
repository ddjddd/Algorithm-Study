#include <cstdio>
#include <iostream>

int main() {
    for (int i = 0; i < 3; i++) {
        int a, b, c, d, ret = -1;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if (a == 0)
            ret++;
        if (b == 0)
            ret++;
        if (c == 0)
            ret++;
        if (d == 0)
            ret++;
        char r = 'A';
        if (ret == -1)
            printf("E\n");
        else
            printf("%c\n", 'A' + ret);
    }
    return 0;
}
