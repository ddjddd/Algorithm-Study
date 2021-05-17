#include <iostream>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a, b, ans, tmp; cin >> a >> b;
    tmp = a;
    if (a > b) {
        a = b;
        b = tmp;
    }

    if (a <= 0 && b >= 0) {
        ans = a * (1 - a) / 2 + b * (b + 1) / 2;;
    }
    else ans = (a + b) * (b - a + 1) / 2;

    cout << ans << endl;

    return 0;
}