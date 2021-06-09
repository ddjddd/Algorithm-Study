#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int num, k, ans = 0;
    cin >> num >> k;

    for (int j = 1; j <= num; j++) {

        int tmp = j;
        for (int i = 2; i <= k; i++) {
            while (!(tmp % i)) tmp /= i;
        }
        ans += (tmp == 1);
    }

    cout << ans << '\n';

    return 0;
}