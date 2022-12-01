#include <iostream>

using namespace std;

int n, m, r;

int arr[301][301];
int ans[301][301] = {0};

struct POS {
    int x, y;
};

int dir = 0;
POS delta[4] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

POS nidx(int x, int y, int bMx, int bMy, int bmx, int bmy, int rotate) {
    int cx = x, cy = y;
    while (rotate) {
        int nx = cx + delta[dir].x;
        int ny = cy + delta[dir].y;
        if (nx == bMx || nx < bmx || ny == bMy || ny < bmy) {
            dir = (dir + 1) % 4;
            cx = cx + delta[dir].x;
            cy = cy + delta[dir].y;
        } else {
            cx = nx;
            cy = ny;
        }
        rotate--;
    }
    return {cx, cy};
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m >> r;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int bound = m < n ? m / 2 : n / 2;
    for (int i = 0; i < bound; i++) {

        int elements = 2 * (m - 2 * i - 1) + 2 * (n - 2 * i - 1);
        int rbound = r % elements;
        POS cur = {i, i};
        int tdir = 0;
        dir = 0;
        for (int j = 0; j < elements; j++) {
            tdir = dir;
            POS next = nidx(cur.x, cur.y, n - i, m - i, i, i, rbound);
            ans[next.x][next.y] = arr[cur.x][cur.y];
            dir = tdir;
            cur = nidx(cur.x, cur.y, n - i, m - i, i, i, 1);
        }
    }

    for (int ii = 0; ii < n; ii++) {
        for (int jj = 0; jj < m; jj++) {
            cout << ans[ii][jj] << ' ';
        }
        cout << endl;
    }

    return 0;
}