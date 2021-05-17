#include <iostream>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int duration[2][102] = { 0, };
    int n, q, cur = 0, tmp; cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        cin >> tmp;
        duration[0][i] = cur;
        duration[1][i] = cur + tmp - 1;
        cur += tmp;
    }
    duration[0][n + 1] = cur;

    for (int i = 0; i < q; i++) {
        cin >> tmp;
        for (int j = 1; j <= n; j++) {
            if (duration[0][j] <= tmp && duration[1][j] >= tmp) {
                cout << j << endl;
                break;
            }
        }
    }

    return 0;
}