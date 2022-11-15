#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int ret = 0;
    if (a == b) {
        if (b == c)
            ret = 10000 + c * 1000;
        else
            ret = 1000 + a * 100;
    } else {
        if (b == c)
            ret = 1000 + b * 100;
        else if (a != c)
            ret = max(a, max(b, c)) * 100;
        else
            ret = 1000 + a * 100;
    }
    cout << ret << '\n';

    return 0;
}