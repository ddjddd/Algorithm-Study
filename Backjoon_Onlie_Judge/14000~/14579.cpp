#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, sum = 0; cin >> a >> b;
    sum = a * (a + 1) / 2;
    int ans = sum;
    for (int i = a + 1; i <= b; i++) {
        sum += i;
        sum %= 14579;
        ans *= sum;
        ans %= 14579;
    }

    cout << ans << endl;;
    return 0;
}
