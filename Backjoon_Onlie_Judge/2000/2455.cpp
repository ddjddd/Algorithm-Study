#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int in[4];
    int out[4];
    int dp[4] = {
        0,
    };

    int cur = 0, ret = 0;
    for (int i = 0; i < 4; i++) {
        scanf("%d %d", &out[i], &in[i]);
        cur = cur - out[i];
        ret = max(cur, ret);
        cur = cur + in[i];
        ret = max(cur, ret);
    }
    printf("%d\n", ret);

    return 0;
}
