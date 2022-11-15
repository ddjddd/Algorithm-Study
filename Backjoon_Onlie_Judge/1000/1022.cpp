#include <iostream>

using namespace std;

int sx, sy, ex, ey;
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, -1, 0, 1 };
int m = 0, tc = 0, cur = 1;
int ret[51][6];

void insert(int x, int y) {
    if (x >= sx && x <= ex && y >= sy && y <= ey) {
        ret[x - sx][y - sy] = cur;
        m = max(m, cur);
        tc++;
    }
}

void solve() {
    int x = 0, y = 0;

    int len = 0;
    int xlen = ex - sx + 1;
    int ylen = ey - sy + 1;
    int tmax = xlen * ylen;

    insert(x, y);

    while (tc != tmax) {
        len += 2;
        y++;
        x++;
        for (int d = 0; d < 4 && tc != tmax; d++) {
            for (int k = 0; k < len && tc != tmax; k++) {
                cur++;
                x += dx[d];
                y += dy[d];
                insert(x, y);
            }
        }
    }

    int cnt = 0;
    while (m > 0) {
        m /= 10;
        cnt++;
    }

    for (int i = 0; i < xlen; i++) {
        for (int j = 0; j < ylen; j++) {
            printf("%*d ", cnt, ret[i][j]);
        }
        printf("\n");
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> sx >> sy >> ex >> ey;
    solve();

    return 0;
}