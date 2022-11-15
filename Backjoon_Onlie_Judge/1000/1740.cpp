#include <iostream>

using namespace std;
typedef long long ll;

ll n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    ll ans = 0;
    while (n) {
        ll tmp = 1, cnt = 0;

        while (tmp - 1 < n) {
            tmp *= 2;
            cnt++;
        }
        cnt--;
        tmp /= 2;

        ll ttmp = 1;
        for (int i = 0; i < cnt; i++) {
            ttmp *= 3;
        }
        ans += ttmp;
        n -= tmp;
    }

    cout << ans << '\n';

    return 0;
}