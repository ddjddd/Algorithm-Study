#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    int len = 0;
    int tlen = 0, minLen = 1;

    while (true) {
        tlen++;
        if (n & minLen) len = tlen;
        if (!(minLen <= 1000000 && minLen < n)) break;
        minLen <<= 1;
    }

    int cnt = len;
    int ctmp = 1;

    while (!(ctmp & n)) {
        ctmp <<= 1;
        cnt--;
    }

    cnt = cnt == 1 ? 0 : cnt;
    cout << minLen << ' ' << cnt << '\n';

    return 0;
}