#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

int a, b, c;
int cur = 0, t = 2;
int acnt = 0, bcnt = 0;

void solve() {
    while (true) {
        acnt++;
        if (!c && acnt == b)
            return;
        cur++;

        bcnt++;
        if (c && bcnt == b)
            return;
        cur++;

        acnt++;
        if (!c && acnt == b)
            return;
        cur++;

        bcnt++;
        if (c && bcnt == b)
            return;
        cur++;

        for (int i = 0; i < t; i++) {
            acnt++;
            if (!c && acnt == b)
                return;
            cur++;
        }

        for (int i = 0; i < t; i++) {
            bcnt++;
            if (c && bcnt == b)
                return;
            cur++;
        }
        t++;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> a >> b >> c;
    solve();

    cout << cur % a << endl;

    return 0;
}