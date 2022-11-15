#include <iostream>

using namespace std;

int main() {
    int n, s, m, ret = -1;
    scanf("%d %d %d", &n, &s, &m);
    bool **dp = new bool *[n + 1];
    for (int i = 0; i <= n; i++) {
        dp[i] = new bool[m + 1]();
    }
    dp[0][s] = true;
    for (int i = 1; i <= n; i++) {
        int step;
        scanf("%d", &step);

        for (int j = 0; j <= m; j++) {
            if (dp[i - 1][j]) {
                if (j + step <= m)
                    dp[i][j + step] = true;
                if (j - step >= 0)
                    dp[i][j - step] = true;
            }
        }
    }
    for (int i = 0; i <= m; i++) {
        if (dp[n][i])
            ret = i;
    }
    printf("%d\n", ret);

    for (int i = 0; i <= n; i++) {
        delete (dp[i]);
    }
    delete (dp);

    return 0;
}
