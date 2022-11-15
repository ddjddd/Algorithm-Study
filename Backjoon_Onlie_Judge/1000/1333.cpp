#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int cur = 0, ret = 0;
    bool over;
    while (!ret) {
        cur++;
        bool sing = false, ring = false;
        if ((cur / (b + 5)) >= a)
            sing = true;
        else if ((cur % (b + 5)) >= b) {
            sing = true;
        }
        if ((cur % c) < 1) {
            ring = true;
        }

        if (sing && ring)
            ret = cur;
    }
    cout << ret;

    return 0;
}