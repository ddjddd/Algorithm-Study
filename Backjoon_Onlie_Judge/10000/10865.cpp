#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // freopen("input.txt", "r", stdin);

    int n, m;
    cin >> n >> m;

    int arr[n + 1] = {0};
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        arr[a]++;
        arr[b]++;
    }

    for (int i = 1; i <= n; i++) {
        cout << arr[i] << '\n';
    }

    return 0;
}
