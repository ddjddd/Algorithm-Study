#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, ans = 0;
    cin >> n;

    int cur = 1;
    while (n > 0) {

        if (n < cur) {
            cur = 1;
        } else {
            n -= cur;
            ans++;
            cur++;
        }
    }

    cout << ans << endl;

    return 0;
}