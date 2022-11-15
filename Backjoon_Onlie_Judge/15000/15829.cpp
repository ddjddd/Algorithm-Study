#include <iostream>

using namespace std;

int len;
string s;

int solve() {
    long long ret = 0;
    for (int i = len - 1; i >= 0; i--) {
        ret *= 31;
        ret += s[i] - 'a' + 1;
        ret %= 1234567891;
    }

    return ret;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> len;
    cin >> s;

    cout << solve() << '\n';

    return 0;
}