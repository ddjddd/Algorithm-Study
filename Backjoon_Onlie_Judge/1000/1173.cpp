#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int target, minA, maxA, plus, minus, ans = 0, cur;
    cin >> target >> minA >> maxA >> plus >> minus;
    cur = minA;
    while (target) {
        if (cur + plus <= maxA) {
            ans++;
            target--;
            cur += plus;
        } else {
            ans++;
            cur -= minus;
            if (cur < minA)
                cur = minA;
        }
        if (cur + plus > maxA && cur == minA) {
            ans = -1;
            break;
        }
        // cout << cur << endl;
    }

    cout << ans << endl;

    return 0;
}