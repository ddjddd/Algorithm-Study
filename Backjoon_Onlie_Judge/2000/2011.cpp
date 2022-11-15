#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int main() {
    char buf[5001];
    scanf("%s", buf);

    int len = strlen(buf);

    int dp0[len] = {
        0,
    };
    int dp1[len] = {
        0,
    };

    if (buf[0] == '0') {
        printf("0\n");
        return 0;
    }
    dp1[0] = 1;

    for (int i = 1; i < len; i++) {
        if (buf[i] == '0') {
            dp1[i] = 0;
        } else {
            dp1[i] = dp1[i - 1] % 1000000 + dp0[i - 1] % 1000000;
            dp1[i] %= 1000000;
        }

        if (buf[i - 1] == '1') {
            dp0[i] = dp1[i - 1] % 1000000;
        } else if (buf[i - 1] == '2') {
            if (buf[i] >= '0' && buf[i] <= '6') {
                dp0[i] = dp1[i - 1] % 1000000;
            }
        }

        dp1[i] %= 1000000;
        dp0[i] %= 1000000;
    }
    int ret = dp0[len - 1] + dp1[len - 1];
    printf("%d\n", ret % 1000000);

    return 0;
}
