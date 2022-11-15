#include <iostream>
using namespace std;
int main() {
    int a, b, c, d, p, ret, ta, tb;
    cin >> a >> b >> c >> d >> p;
    ta = a * p;
    tb = b + (c < p ? (p - c) * d : 0);
    cout << (ta < tb ? ta : tb) << '\n';
    return 0;
}