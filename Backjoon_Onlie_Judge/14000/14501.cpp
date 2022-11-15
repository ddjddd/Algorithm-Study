#include <iostream>
#define MAX(a, b) ((a) > (b) ? (a) : (b))
using namespace std;

int t[16], p[16];
int dp[17];
int n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> t[i] >> p[i];
        dp[0] = 0;
    }

    for (int i = 1; i <= n + 1; i++) {
        for (int j = 1; j < i; j++) {
            if (i - j >= t[j]) {
                dp[i] = MAX(dp[i], dp[j] + p[j]);
            }
        }
    }

    cout << dp[n + 1] << '\n';

    return 0;
}
