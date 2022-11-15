#include <stdio.h>
#include <string.h>

int main() {
    char buf[101];
    scanf(" %s", buf);

    int l = strlen(buf), i = 0;
    printf("%c", buf[0]);
    for (i = 1; i < l - 1; i++) {
        if (buf[i] == 45) {
            printf("%c", buf[i + 1]);
        }
    }
    printf("\n");
    return 0;
}
