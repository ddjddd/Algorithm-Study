#include <iostream>

using namespace std;

int main() {
    int e, s, m;
    int maxE = 15, maxS = 28, maxM = 19;

    cin >> e >> s >> m;
    e--;
    s--;
    m--;
    int ret = 0;
    for (int i = 0; i <= 15 * 19; i++) {
        int t = 28 * i + s - e;
        if (t % 15 == 0) {
            int T = 28 * i + s - m;
            if (T % 19 == 0) {
                ret = 28 * i + s + 1;
                break;
            }
        }
    }
    cout << ret << '\n';

    return 0;
}
