#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, p, l, e, r, s, n;
    while (scanf("%d %d %d %d %d %d %d", &m, &p, &l, &e, &r, &s, &n) != EOF) {
        for (int i = 0; i < n; i++) {
            int nm, np, nl;
            nm = p / s;
            np = l / r;
            nl = m * e;
            m = nm, p = np, l = nl;
        }
        cout << m << endl;;
    }
    return 0;
}
