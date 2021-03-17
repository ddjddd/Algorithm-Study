#include <iostream>

using namespace std;

int main() {
    int t, m, d; cin >> t >> m >> d;
    m = m + d;
    t += m / 60;
    m %= 60;
    t %= 24;
    cout << t << ' ' << m << '\n';

    return 0;
}