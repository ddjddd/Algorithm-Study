#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, c, tmp;
    cin >> n >> c;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int ans = 0;
    for (int i = 1; i <= c; i++) {
        for (auto &it : v) {
            if (!(i % it)) {
                ans++;
                break;
            }
        }
    }

    cout << ans << endl;

    return 0;
}