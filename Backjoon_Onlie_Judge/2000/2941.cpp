#include <stdio.h>
#include <string.h>

int main() {
    char buf[101];
    gets(buf);
    int i = 0, len = strlen(buf), count = 0;

    for (i; i < len; i++) {
        if (buf[i] == 'c' && buf[i + 1] == '=') {
            count++;
            i++;
        } else if (buf[i] == 'c' && buf[i + 1] == '-') {
            count++;
            i++;
        } else if (buf[i] == 'd' && buf[i + 1] == 'z' && buf[i + 2] == '=') {
            count++;
            i += 2;
        } else if (buf[i] == 'd' && buf[i + 1] == '-') {
            count++;
            i++;
        } else if (buf[i] == 'l' && buf[i + 1] == 'j') {
            count++;
            i++;
        } else if (buf[i] == 'n' && buf[i + 1] == 'j') {
            count++;
            i++;
        } else if (buf[i] == 's' && buf[i + 1] == '=') {
            count++;
            i++;
        } else if (buf[i] == 'z' && buf[i + 1] == '=') {
            count++;
            i++;
        } else
            count++;
    }

    printf("%d\n", count);
    return 0;
}
