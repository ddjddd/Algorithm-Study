#include <iostream>
using namespace std;
int main () {
    int l, a, b, c, d, ret; cin >> l >> a >> b >> c >> d;
    int ta = a/c + (a%c?1:0), tb = b/d + (b%d?1:0);
    cout << (ta>tb ? l-ta : l-tb) << endl;
    return 0;
}