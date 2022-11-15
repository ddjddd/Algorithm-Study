#include <iostream>
#define MIN(a, b) ((a) > (b)) ? (b) : (a)

using namespace std;

int main() {
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    int ret = MIN(x, MIN(w - x, MIN(y, h - y)));
    cout << ret << endl;
    return 0;
}
