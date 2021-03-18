#include <iostream>
using namespace std;
int main() {
    int n, ret = 0; cin >> n;
    for (int i = 1; i <= n; i++) {
        ret += 3 * i * (i + 1) / 2;
    }
    cout << ret << '\n';
    return 0;
}