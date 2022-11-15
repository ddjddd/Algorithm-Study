#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int cases;
    scanf("%d", &cases);
    long long dp[101] = {
        0,
    };

    dp[1] = dp[2] = dp[3] = 1;
    dp[4] = dp[5] = 2;

    for (int i = 6; i < 101; i++) {
        dp[i] = dp[i - 1] + dp[i - 5];
    }

    for (int i = 0; i < cases; i++) {
        int t;
        scanf("%d", &t);
        printf("%lld\n", dp[t]);
    }
    return 0;
}
