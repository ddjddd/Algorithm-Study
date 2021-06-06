#include <iostream>

using namespace std;

int n, digit;

bool check(int cur) {
    int tmp = cur;
    while (tmp) {
        if (tmp % 10 == digit) return false;
        tmp /= 10;
    }
    return cur ? true : false;
}

void solve() {
    int ans = 0;
    for (int i = 0; i < n; i++) {
        // cout << ans << endl;
        if (check(ans))ans++;
        while (!check(ans)) ans++;
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> digit;
    solve();

    return 0;
}