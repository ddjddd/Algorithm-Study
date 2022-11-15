#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long ans = 0;
    long long n;
    cin >> n;
    for (long long i = 1; i < n; i++) {
        ans += i * n + i;
    }
    cout << ans << endl;

    return 0;
}