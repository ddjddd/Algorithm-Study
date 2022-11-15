#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    bool arr[100][100] = {
        0,
    };
    int n, a, b, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        for (int ki = 0; ki < 10; ki++) {
            for (int kj = 0; kj < 10; kj++) {
                arr[a + ki][b + kj] = true;
            }
        }
    }

    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (arr[i][j])
                ans++;
        }
    }

    cout << ans << '\n';

    return 0;
}
