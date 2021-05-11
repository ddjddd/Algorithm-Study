#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, tmp; cin >> n;
    ll ans = 0, storage;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        v.push_back(tmp);
    }
    cin >> storage;

    for (auto& it : v) {
        ans += it / storage + (it % storage ? 1 : 0);
    }
    cout << ans * storage << endl;

    return 0;
}
