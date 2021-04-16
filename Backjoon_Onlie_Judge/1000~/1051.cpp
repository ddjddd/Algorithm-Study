#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char buf[51][51] = { 0, };
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> buf[i];
    }

    int plen = max(n, m);
    while (plen > 1) {
        for (int i = 0; i <= n - plen; i++) {
            for (int j = 0; j <= m - plen; j++) {
                if (buf[i][j] == buf[i][j + plen - 1]
                    && buf[i][j] == buf[i + plen - 1][j]
                    && buf[i][j] == buf[i + plen - 1][j + plen - 1]) {
                    cout << plen * plen << '\n';
                    return 0;
                }
            }
        }
        plen--;
    }
    cout << 1 << '\n';

    return 0;
}