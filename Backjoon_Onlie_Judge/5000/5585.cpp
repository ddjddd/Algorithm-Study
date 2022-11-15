#include <cmath>
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int in, ans = 0;
    cin >> in;
    int arr[6] = { 500, 100, 50, 10, 5, 1 };
    in = 1000 - in;
    for (auto &i : arr) {
        ans += in / i;
        in %= i;
    }
    cout << ans << endl;

    return 0;
}