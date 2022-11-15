#include <iostream>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int ans = 0, ansC = 0;
    for (int i = 1; i < 6; i++) {
        int tmp, tsum = 0;
        for (int j = 0; j < 4; j++) {
            cin >> tmp;
            tsum += tmp;
        }

        if (ansC < tsum) {
            ans = i;
            ansC = tsum;
        }
    }

    cout << ans << ' ' << ansC << endl;

    return 0;
}