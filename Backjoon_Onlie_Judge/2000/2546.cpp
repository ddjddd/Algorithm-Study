#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tC;
    cin >> tC;
    for (int tc = 1; tc <= tC; tc++) {
        vector<int> v;
        ll n, m;
        ll asum = 0, bsum = 0, tmp;
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            asum += tmp;
            v.push_back(tmp);
        }
        for (int i = 0; i < m; i++) {
            cin >> tmp;
            bsum += tmp;
        }
        double aavg = (double)asum / n, bavg = (double)bsum / m;
        int ans = 0;
        // cout << bavg << endl;
        for (auto &it : v) {
            if (it > bavg && it < aavg) {
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}