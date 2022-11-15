#include <iostream>

using namespace std;

int main() {
    int t, m, s, d;
    cin >> t >> m >> s >> d;
    s += d;
    m += s / 60;
    s %= 60;
    t += m / 60;
    m %= 60;
    t %= 24;
    cout << t << ' ' << m << ' ' << s << '\n';

    return 0;
}