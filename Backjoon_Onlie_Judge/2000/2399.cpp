#include <iostream>

#define ABS(x) (x) > 0 ? (x) : -(x)

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("jh.in", "r", stdin);

    int n;
    cin >> n;
    int arr[n];
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                ans += ABS(arr[i] - arr[j]);
            }
        }
    }

    cout << ans << '\n';

    return 0;
}
