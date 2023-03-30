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

        int tmp = arr[a];
        arr[a] = arr[b];
        arr[b] = tmp;
    }

    for (int i = 1; i <= n; i++)
        cout << arr[i] << ' ';
    cout << '\n';
    return 0;
}