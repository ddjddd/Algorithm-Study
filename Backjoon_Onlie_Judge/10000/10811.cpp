#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("jh.in", "rt", stdin);

    int n, m, arr[101] = {
                  0,
              };
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        arr[i] = i;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;

        for (int j = 0; j < (b - a + 1) / 2; j++) {
            int l = a + j, r = b - j;
            int tmp = arr[l];
            arr[l] = arr[r];
            arr[r] = tmp;
        }
    }

    for (int i = 1; i <= n; i++)
        cout << arr[i] << ' ';

    cout << '\n';
    return 0;
}