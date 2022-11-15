#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long x, y;
    cin >> x >> y;
    long long z = y * 100 / x;

    int ans = -1;
    if (z < 99) {
        int left = 0, right = 1000000000;

        while (left <= right) {
            int mid = (left + right) / 2;
            int tmp = (y + mid) * 100 / (x + mid);

            if (tmp <= z) {
                ans = mid + 1;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    }
    cout << ans << '\n';

    return 0;
}