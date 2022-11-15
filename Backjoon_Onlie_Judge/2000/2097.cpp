#include <cmath>
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    double t = sqrt(n);
    int a = t - (int)t > 0 ? t + 1 : t, b = n / a + (bool)(n % a);

    int ans = 2 * (a + b - 2);
    ans = ans < 4 ? 4 : ans;

    cout << ans << '\n';

    return 0;
}