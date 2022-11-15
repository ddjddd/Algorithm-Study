#include <iostream>
#include <vector>

using namespace std;
typedef pair<int, int> pii;

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (char c = 'A'; c != 'H'; c++) {
        char cur = c;

        bool flag = true;
        for (auto &it : v) {
            int tmp = it;

            while (tmp && flag) {
                if (tmp < 0) {
                    tmp += (cur == 'C' || cur == 'F') ? 1 : 2;
                    cur--;
                    if (cur < 'A')
                        cur += 7;
                    if (tmp > 0)
                        flag = false;
                } else if (tmp > 0) {
                    tmp -= (cur == 'B' || cur == 'E') ? 1 : 2;
                    cur++;
                    if (cur > 'G')
                        cur -= 7;
                    if (tmp < 0)
                        flag = false;
                }
            }
            if (!flag)
                break;
        }
        if (flag) {
            cout << c << ' ' << cur << '\n';
        }
    }

    return 0;
}