#include <iostream>

using namespace std;

int solve(int a, int b, int c, int aa, int bb, int cc) {
    int ans = 0;
    while (true) {
        if (!((a + b + c) % 3)) ans++;
        if (a == aa && b == bb && c == cc) break;

        c++;
        if (c >= 60) { c -= 60; b++; }
        if (b >= 60) { b -= 60; a++; }
        if (a >= 24) { a = 0; }
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int tc = 0; tc < 3; tc++) {
        int a, b, c, aa, bb, cc;
        scanf("%d:%d:%d %d:%d:%d", &a, &b, &c, &aa, &bb, &cc);
        cout << solve(a, b, c, aa, bb, cc) << endl;
    }

    return 0;
}