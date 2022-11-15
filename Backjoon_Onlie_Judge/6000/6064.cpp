#include <iostream>

using namespace std;

int main() {
    int cases;
    cin >> cases;
    while (cases > 0) {
        int m, n, x, y, tmp, max;
        cin >> m >> n >> x >> y;
        max = m * n;
        tmp = x;
        y == n ? y = 0 : y;
        while (true) {
            if (tmp % n == y)
                break;
            else {
                tmp += m;
            }
            if (tmp > max) {
                tmp = -1;
                break;
            }
        }
        cout << tmp << endl;
        cases--;
    }

    return 0;
}
