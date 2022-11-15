#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    for (int i = 0; i < tc; i++) {
        int num, ans = 0;
        cin >> num;

        for (int i = 2; i <= num; i++) {
            int tmp = num;
            while (!(tmp % i)) {
                ans++;
                tmp /= i;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}