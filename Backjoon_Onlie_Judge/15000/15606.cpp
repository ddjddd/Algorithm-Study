#include <algorithm>
#include <iostream>

using namespace std;
typedef long long ll;

ll minimum(ll a, ll b, ll c) {
    ll ret = a > b ? b : a;
    ret = ret > c ? c : ret;
    return ret;
}

ll formula(ll a, ll b, ll c, ll p, ll q, ll r) {
    ll ret = 0;
    ret = (a + p) * (a + p) + (b + q) * (b + q) + (c + r) * (c + r);
    ret += 7 * minimum(a + p, b + q, c + r);
    return ret;
}

void sort_3(ll *ma, ll *mb, ll *mc) {
    ll a = *ma, b = *mb, c = *mc;
    if (a >= b && a >= c) {
        *ma = a;
        if (b > c) {
            *mb = b;
            *mc = c;
        } else {
            *mb = c;
            *mc = b;
        }
    } else if (b >= a && b >= c) {
        *ma = b;
        if (a > c) {
            *mb = a;
            *mc = c;
        } else {
            *mb = c;
            *mc = a;
        }
    } else if (c >= a && c >= b) {
        *ma = c;
        if (a > b) {
            *mb = a;
            *mc = b;
        } else {
            *mb = b;
            *mc = a;
        }
    }
}

int main() {
    // freopen("sample_input.txt", "r", stdin);
    int tC;
    cin >> tC;
    for (int tc = 1; tc <= tC; tc++) {

        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll ma = 0, mb = 0, mc = 0;

        sort_3(&a, &b, &c);
        bool trial = true;
        ll ret = 0, re_t;
        for (ll i = 0; i <= d && trial; i++) {
            for (ll j = 0; j + i <= d && trial; j++) {
                ret = max(ret, formula(a, b, c, d - i - j, i, j));
                //cout << a << b << c << ' ' << ret << endl;
                if (9 - 2 * (a + d - j - 1 - min(b, c + d - j + 1)) <= 0)
                    trial = false;
            }
        }
        cout << ret << endl;
        //cout << endl;
    }
}