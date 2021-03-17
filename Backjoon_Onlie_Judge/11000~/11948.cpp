#include <iostream>

using namespace std;

int main() {
    int a[6]; for (int i = 0; i < 6; i++) cin >> a[i];
    int sum = 0, tmp = 2000;
    for (int i = 0; i < 4; i++) {
        sum += a[i];
        tmp = min(tmp, a[i]);
    }
    sum -= tmp;
    sum += max(a[4], a[5]);
    cout << sum << '\n';

    return 0;
}