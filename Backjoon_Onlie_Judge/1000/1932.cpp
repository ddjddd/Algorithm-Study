#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int lines;
    cin >> lines;
    int dp[lines][lines];

    for (int i = 0; i < lines; i++)
        for (int j = 0; j < lines; j++)
            dp[i][j] = 0;

    cin >> dp[0][0];

    for (int i = 1; i < lines; i++) {
        int tmp;
        cin >> tmp;
        dp[i][0] = dp[i - 1][0] + tmp;
        for (int j = 1; j < i + 1; j++) {
            int tmp;
            cin >> tmp;
            dp[i][j] = tmp + max(dp[i - 1][j], dp[i - 1][j - 1]);
        }
    }

    int ret = 0;
    for (int i = 0; i < lines; i++) {
        ret = max(ret, dp[lines - 1][i]);
    }
    printf("%d\n", ret);

    return 0;
}
