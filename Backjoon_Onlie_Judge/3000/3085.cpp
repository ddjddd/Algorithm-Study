#include <iostream>

using namespace std;

int n;
char arr[50][51];
int ans = 0;

void swap(int x1, int y1, int x2, int y2) {
    char tmp = arr[x1][y1];
    arr[x1][y1] = arr[x2][y2];
    arr[x2][y2] = tmp;
}

void checksum(int x, int y) {
    int tmpCount = 1;
    char tmp = arr[x][0];

    int tmpM = 0;
    for (int i = 1; i < n; i++) {
        if (arr[x][i] == tmp) {
            tmpCount += 1;
            ans = tmpCount > ans ? tmpCount : ans;

        } else {
            tmp = arr[x][i];
            tmpCount = 1;
        }
    }

    tmpCount = 1;
    tmp = arr[0][y];
    for (int i = 1; i < n; i++) {
        if (arr[i][y] == tmp) {
            tmpCount += 1;
            ans = tmpCount > ans ? tmpCount : ans;
        } else {
            tmp = arr[i][y];
            tmpCount = 1;
        }
    }
}

void update(int x1, int y1, int x2, int y2) {
    swap(x1, y1, x2, y2);
    checksum(x1, y1);
    checksum(x2, y2);
    swap(x1, y1, x2, y2);
}

bool bound(int dx, int dy) {
    return dx >= 0 && dx < n && dy >= 0 && dy < n;
}

void solve() {
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    for (int x = 0; x < n; x++) {
        for (int y = 0; y < n; y++) {
            for (int d = 0; d < 4; d++) {
                int nx = x + dx[d];
                int ny = y + dy[d];

                if (bound(nx, ny)) {
                    update(x, y, nx, ny);
                }
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // freopen("jh.in", "rt", stdin);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        checksum(i, i);
    }
    solve();

    cout << ans << '\n';

    return 0;
}