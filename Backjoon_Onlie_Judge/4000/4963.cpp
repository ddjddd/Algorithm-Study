#include <cstdio>
#include <iostream>
#include <queue>
#include <utility>

using namespace std;

int dx[8] = { 1, 1, 1, 0, 0, -1, -1, -1 };
int dy[8] = { 1, 0, -1, 1, -1, 1, 0, -1 };

int main() {
    int w = 1, h = 1;
    while (w || h) {
        scanf("%d %d", &h, &w);
        if (!w && !h)
            break;

        int **map = new int *[w];
        for (int i = 0; i < w; i++) {
            map[i] = new int[h];
            for (int j = 0; j < h; j++) {
                scanf("%d", &map[i][j]);
            }
        }

        int cnt = 0;
        queue<pair<int, int>> q;
        for (int i = 0; i < w; i++) {
            for (int j = 0; j < h; j++) {
                if (map[i][j]) {
                    q.push(make_pair(i, j));
                    map[i][j] = 0;
                    cnt++;
                    while (!q.empty()) {
                        int tx = q.front().first;
                        int ty = q.front().second;
                        q.pop();
                        for (int k = 0; k < 8; k++) {
                            int ttx = tx + dx[k];
                            int tty = ty + dy[k];
                            if (ttx >= 0 && tty >= 0 && ttx < w && tty < h) {
                                if (map[ttx][tty]) {
                                    q.push(make_pair(ttx, tty));
                                    map[ttx][tty] = 0;
                                }
                            }
                        }
                    }
                }
            }
        }
        cout << cnt << endl;

        delete (map);
    }
    return 0;
}
