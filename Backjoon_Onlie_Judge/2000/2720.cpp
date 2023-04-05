#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int TC;
    cin >> TC;
    for (int tc = 0; tc < TC; tc++) {
        int sum;
        cin >> sum;

        int a, b, c, d;
        a = sum / 25;
        sum %= 25;
        b = sum / 10;
        sum %= 10;
        c = sum / 5;
        sum %= 5;
        d = sum;

        cout << a << ' ' << b << ' ' << c << ' ' << d << '\n';
    }
    return 0;
}