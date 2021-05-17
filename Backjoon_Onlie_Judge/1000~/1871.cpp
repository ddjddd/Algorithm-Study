#include <iostream>
#include <string>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        char buf[9];
        cin >> buf;
        int a = (buf[0] - 'A') * 26 * 26 + (buf[1] - 'A') * 26 + (buf[2] - 'A');
        int b = (buf[4] - '0') * 1000 + (buf[5] - '0') * 100 + (buf[6] - '0') * 10 + (buf[7] - '0');

        if (abs(b - a) <= 100) cout << "nice\n";
        else cout << "not nice\n";
    }

    return 0;
}