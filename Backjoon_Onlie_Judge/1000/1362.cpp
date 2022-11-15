#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solve(int o, int w) {
    bool death = false;
    while (1) {
        char c;
        int a;
        cin >> c >> a;

        if (c == '#')
            return death ? 0 : w;
        else if (c == 'F')
            w += a;
        else if (c == 'E')
            w -= a;

        if (w <= 0)
            death = true;
        ;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    while (tc) {
        int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0)
            return 0;
        int cur = solve(a, b);
        if (cur <= 0)
            cout << tc << " RIP\n";
        else if (cur > a / 2 && cur < 2 * a)
            cout << tc << " :-)\n";
        else
            cout << tc << " :-(\n";
        tc++;
    }

    return 0;
}