#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int v[300];
    int dp[3][300];

    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        if (i == 0) {
            dp[0][0] = tmp;
            dp[1][0] = tmp;
            dp[2][0] = 0;
        } else if (i == 1) {
            dp[0][1] = dp[0][0] + tmp;
            dp[1][1] = tmp;
            dp[2][1] = dp[0][0];
        } else {
            dp[0][i] = dp[1][i - 1] + tmp;
            dp[1][i] = max(dp[0][i - 2], dp[1][i - 2]) + tmp;
            dp[2][i] = max(dp[0][i - 1], dp[1][i - 1]);
        }
    }

    cout << max(dp[0][n - 1], dp[1][n - 1]) << '\n';

    return 0;
}