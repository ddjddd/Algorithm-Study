#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, ma = 0, tmp, ans = 0;
    cin >> a >> b;

    vector<int> va, vb;
    for (int i = 0; i < a; i++) {
        cin >> tmp;
        va.push_back(-tmp);
    }

    for (int i = 0; i < b; i++) {
        cin >> tmp;
        vb.push_back(-tmp);
    }
    sort(va.begin(), va.end());
    sort(vb.begin(), vb.end());

    ans = a;
    for (auto &ia : va) {
        for (auto &ib : vb) {
            if (ia < ib && ib) {
                ib = 0;
                ans++;
                break;
            }
        }
    }

    cout << ans << endl;

    return 0;
}