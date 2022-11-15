#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, i = 10;
    cin >> a;
    while (true) {
        if (a > i) {
            int t = a % i / (i / 10);
            if (t >= 5)
                a += i;
            a -= t * (i / 10);
            i *= 10;
        } else
            break;
    }

    cout << a << '\n';

    return 0;
}