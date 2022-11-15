#include <iostream>
using namespace std;
int main() {
    int a, b, c, d, ret;
    cin >> a >> b >> c >> d;
    ret = (b / d) * (c / d);
    cout << (ret > a ? a : ret) << '\n';
    return 0;
}