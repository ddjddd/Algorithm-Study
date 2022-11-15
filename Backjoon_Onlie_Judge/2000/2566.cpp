#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int max = -1, t, ans, ans_x, ans_y;
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            cin >> t;
            if (max < t) {
                ans_x = i;
                ans_y = j;
                max = t;
            }
        }
    }

    ans = max;
    cout << ans << '\n'
         << ans_x << ' ' << ans_y << '\n';

    return 0;
}
