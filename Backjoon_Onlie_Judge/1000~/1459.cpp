#include <iostream>
#include <cmath>

using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll x, y, w, s, ans = 0;
    cin >> x >> y >> w >> s;
    x = abs(x), y = abs(y);
    ll ds = min(x, y);
    ll dw = max(x, y) - ds;
    ll ms = max(x, y);
    ll mw = (x + y) % 2;

    ans = (x + y) * w;
    ans = min(ans, (ms - mw) * s + mw * w);
    ans = min(ans, ds * s + dw * w);

    cout << ans << endl;

    return 0;
}