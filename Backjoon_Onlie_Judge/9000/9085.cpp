#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tC;
    cin >> tC;
    for (int tc = 1; tc <= tC; tc++) {
        int n, t, ans = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> t;
            ans += t;
        }
        cout << ans << '\n';
    }

    return 0;
}
