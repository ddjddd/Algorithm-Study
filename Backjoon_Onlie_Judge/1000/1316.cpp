#include <stdio.h>
#include <string.h>

int main() {
    int cases = 0;
    scanf(" %d\n", &cases);
    int result = 0;
    while (cases > 0) {
        char buf[101];
        gets(buf);
        int a[36] = {
            0,
        };
        int i = 0, l = strlen(buf), ret = 0;
        for (i = 0; i < l; i++) {
            if (a[buf[i] - 'a'] == 1) {
                ret = -1;
                break;
            } else if (a[buf[i] - 'a'] == 0 && buf[i] != buf[i + 1]) {
                a[buf[i] - 'a'] = 1;
            }
        }
        (ret != -1) ? result++ : result;
        cases--;
    }
    printf("%d\n", result);
    return 0;
}
