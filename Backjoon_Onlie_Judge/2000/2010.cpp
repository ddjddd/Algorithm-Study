#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int len;
    cin >> len;
    int ret = 1;

    for (int i = 0; i < len; i++) {
        int t;
        cin >> t;
        ret += (t - 1);
    }

    cout << ret << '\n';
    return 0;
}
