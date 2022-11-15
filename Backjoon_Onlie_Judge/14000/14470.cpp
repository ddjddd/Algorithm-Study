#include <iostream>
using namespace std;
int main() {
    int a, b, c, d, e, ret;
    cin >> a >> b >> c >> d >> e;
    ret = (a < 0 ? -a * c + d : 0) + (a > 0 ? (b - a) * e : b * e);
    cout << ret;
    return 0;
}