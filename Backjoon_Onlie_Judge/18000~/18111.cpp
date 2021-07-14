#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, store;
    cin >> n >> m >> store;
    vector<vector<int>> v(n, vector<int>(m));

    int tMax = 0, tMin = 987654321;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> v[i][j];
            tMax = max(v[i][j], tMax);
            tMin = min(v[i][j], tMin);
        }
    }

    int ansH = tMax, ansT = 987654321;

    for(int k = tMin; k <= tMax; k++) {
        int tmp = 0, tH = store;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                int l = k - v[i][j];
                // cout << l << ' ';
                tH -= l;
                if(l < 0) {
                    tmp += -2*l;
                }
                else {
                    tmp += l;
                }
            }
        }

        // cout << k << ' ' << tmp << endl;

        if(tH >= 0) {
            if(tmp <= ansT) {
                ansH = k;
                ansT = tmp;
            }
        }
    }

    cout << ansT << ' ' << ansH << '\n';

    return 0;
}