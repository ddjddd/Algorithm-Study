#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, target, ans = 0, tmax = 0;
    cin >> n >> target;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        tmax = max(tmax, v[i]);
    }

    ll left = 1, right = tmax, mid;
    while (left <= right) {
        mid = (left + right) / 2;

        ll tmp = 0;
        for (auto &it : v) {
            tmp += it / mid;
        }

        if (tmp >= target) {
            left = mid + 1;
            ans = max(ans, mid);
        } else {
            right = mid - 1;
        }
    }

    cout << ans << '\n';

    return 0;
}