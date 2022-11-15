#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cur = 1;
    int len, a, b;
    cin >> len;
    for (int i = 0; i < len; i++) {
        cin >> a >> b;
        if (a != b) {
            if (a == cur)
                cur = b;
            else if (b == cur)
                cur = a;
        }
    }
    cout << cur << '\n';
    return 0;
}
