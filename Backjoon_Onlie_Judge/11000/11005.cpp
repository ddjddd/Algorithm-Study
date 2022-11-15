#include <stdio.h>

int main() {
    int input, dec;
    scanf("%d %d", &input, &dec);
    char str[100001];
    int len = 0;

    while (input != 0) {
        int temp = input % dec;
        char print;
        if (temp >= 10) {
            print = (char)(temp - 10) + 'A';
        } else {
            print = (char)temp + '0';
        }
        str[len++] = print;
        input /= dec;
    }
    int i = 0;
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
