#include <iostream>

using namespace std;

int r, c, t, pos1 = -1, pos2 = -1, map[50][50];
int dx[4] = { 1, -1, 0, 0 }, dy[4] = { 0, 0, 1, -1 };

void second() {
    int diff[50][50] = {
        0,
    };
    // spread dust
    for (int x = 0; x < r; x++) {
        for (int y = 0; y < c; y++) {
            if (map[x][y] > 4) {
                int cnt = 0, tdiff = map[x][y] / 5;
                if (x + 1 < r && map[x + 1][y] != -1) {
                    diff[x + 1][y] += tdiff;
                    cnt++;
                }
                if (x - 1 >= 0 && map[x - 1][y] != -1) {
                    diff[x - 1][y] += tdiff;
                    cnt++;
                }
                if (y + 1 < c && map[x][y + 1] != -1) {
                    diff[x][y + 1] += tdiff;
                    cnt++;
                }
                if (y - 1 >= 0 && map[x][y - 1] != -1) {
                    diff[x][y - 1] += tdiff;
                    cnt++;
                }
                diff[x][y] -= cnt * tdiff;
            }
        }
    }

    // add diff to map
    for (int x = 0; x < r; x++) {
        for (int y = 0; y < c; y++) {
            map[x][y] += diff[x][y];
        }
    }

    // air cleaner works
    // up
    for (int i = pos1 - 1; i > 0; i--) {
        map[i][0] = map[i - 1][0];
    }
    for (int i = 0; i < c - 1; i++) {
        map[0][i] = map[0][i + 1];
    }
    for (int i = 0; i < pos1; i++) {
        map[i][c - 1] = map[i + 1][c - 1];
    }
    for (int i = c - 1; i > 0; i--) {
        map[pos1][i] = map[pos1][i - 1];
    }
    map[pos1][1] = 0;
    // down
    for (int i = pos2 + 1; i < r - 1; i++) {
        map[i][0] = map[i + 1][0];
    }
    for (int i = 0; i < c - 1; i++) {
        map[r - 1][i] = map[r - 1][i + 1];
    }
    for (int i = r - 1; i > pos2; i--) {
        map[i][c - 1] = map[i - 1][c - 1];
    }
    for (int i = c - 1; i > 0; i--) {
        map[pos2][i] = map[pos2][i - 1];
    }
    map[pos2][1] = 0;

    return;
}

int sum() {
    int ret = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            ret += map[i][j];
        }
    }
    return ret + 2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> r >> c >> t;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int tmp;
            cin >> tmp;
            if (tmp == -1) {
                if (pos1 == -1)
                    pos1 = i;
                else
                    pos2 = i;
            }
            map[i][j] = tmp;
        }
    }
    for (int i = 0; i < t; i++) {
        second();
    }
    cout << sum() << '\n';
    return 0;
}
