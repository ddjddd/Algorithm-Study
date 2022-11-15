#include <iostream>

using namespace std;

const int MAX = 987654321;

int Min(int a, int b) { return a < b ? a : b; }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    int n, k;
    cin >> n >> k;
    int *coin = new int[n];
    for (int i = 0; i < n; i++)
        cin >> coin[i];
    int *dp = new int[k + 1];

    for (int i = 0; i <= k; i++) {
        dp[i] = MAX;
    }
    dp[0] = 0;
    for (int j = 0; j < n; j++) {
        int c = coin[j];
        for (int i = c; i <= k; i++) {
            dp[i] = Min(dp[i], 1 + dp[i - c]);
        }
    }

    int ans = 0;
    if (dp[k] == MAX)
        ans = -1;
    else
        ans = dp[k];
    cout << ans << endl;

    return 0;
}
