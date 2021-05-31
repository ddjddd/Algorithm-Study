#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c; cin >> a >> b >> c;
    int count[1001] = { 0, 1, 0, };

    int ci = 1, ni;
    int ans = 0;
    while (count[ci] != b) {
        if (count[ci] % 2) ni = (ci + c) % a;
        else ni = (ci + a - c) % a;

        count[ni]++;
        ci = ni;
        ans++;
    }

    cout << ans << endl;

    return 0;
}