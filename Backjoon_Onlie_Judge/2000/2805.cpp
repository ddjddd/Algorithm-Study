#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int len;
    ll limit, mlen = 0, ans = 0;
    cin >> len >> limit;
    vector<ll> v(len);

    for (int i = 0; i < len; i++) {
        cin >> v[i];
        mlen = max(v[i], mlen);
    }

    ll left = 0, right = mlen, mid;
    while (left <= right) {

        ll mid = (left + right) / 2;
        ll tmp = 0;
        for (auto &it : v) {
            tmp += it > mid ? it - mid : 0;
        }

        if (tmp >= limit) {
            ans = max(ans, mid);
            left = mid + 1;
        } else
            right = mid - 1;
    }

    cout << ans << '\n';

    return 0;
}