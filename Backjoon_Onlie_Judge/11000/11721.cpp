#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    char buffer[101];
    int i, j;
    gets(buffer);
    for (j = 0; j < 10; j++) {
        for (i = 0; i < 10; i++) {
            if (10 * j + i < strlen(buffer)) {
                printf("%c", buffer[10 * j + i]);
            } else
                return 0;
        }
        printf("\n");
    }
    return 0;
}
