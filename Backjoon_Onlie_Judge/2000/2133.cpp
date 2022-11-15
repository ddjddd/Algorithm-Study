#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int input;
    scanf("%d", &input);

    int dp[31] = {
        0,
    };
    dp[0] = 1;
    dp[2] = 3;

    for (int i = 4; i < 31; i += 2) {
        dp[i] = 3 * dp[i - 2];
        for (int j = 4; j <= i; j += 2) {
            dp[i] += dp[i - j] * 2;
        }
    }
    printf("%d\n", dp[input]);
    return 0;
}
