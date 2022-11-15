#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, ans = 0;
    int a[51], b[51];

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int i = 0, j = 0;
    for (; i < n; i++) {
        for (; j < m; j++) {
            if (a[i] >= b[j])
                a[i] -= b[j];
            else
                break;
        }
        ans += a[i];
    }

    cout << ans << endl;

    return 0;
}