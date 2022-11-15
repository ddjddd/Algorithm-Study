#include <cstring>
#include <iostream>
#define MAX 101

using namespace std;
typedef struct Node {
    int Vel, Dir, Sz;
} node;

int r, c, m, ans = 0;
int rr, cc;
node map[MAX][MAX] = {
    0,
};

void second(int clock) {
    // get one
    for (int i = 1; i <= r; i++) {
        if (map[i][clock].Dir) {
            ans += map[i][clock].Sz;
            map[i][clock].Dir = 0;
            break;
        }
    }

    // move sharks
    node tMap[MAX][MAX] = {
        0,
    };
    for (int x = 1; x <= r; x++) {
        for (int y = 1; y <= c; y++) {
            if (map[x][y].Dir) {
                int dir = map[x][y].Dir;
                int vel = map[x][y].Vel;
                int sz = map[x][y].Sz;

                int tmp;
                if (dir == 1 || dir == 2) {
                    tmp = x;
                    for (int k = 0; k < vel; k++) {
                        if (dir == 1) {
                            tmp--;
                            if (tmp == 0) {
                                tmp = 2;
                                dir = 2;
                            }
                        } else if (dir == 2) {
                            tmp++;
                            if (tmp == r + 1) {
                                tmp = r - 1;
                                dir = 1;
                            }
                        }
                    }
                    if (tMap[tmp][y].Sz < sz) {
                        tMap[tmp][y].Vel = vel;
                        tMap[tmp][y].Dir = dir;
                        tMap[tmp][y].Sz = sz;
                    }
                } else if (dir == 3 || dir == 4) {
                    tmp = y;
                    for (int k = 0; k < vel; k++) {
                        if (dir == 4) {
                            tmp--;
                            if (tmp == 0) {
                                tmp = 2;
                                dir = 3;
                            }
                        } else if (dir == 3) {
                            tmp++;
                            if (tmp == c + 1) {
                                tmp = c - 1;
                                dir = 4;
                            }
                        }
                    }
                    if (tMap[x][tmp].Sz < sz) {
                        tMap[x][tmp].Vel = vel;
                        tMap[x][tmp].Dir = dir;
                        tMap[x][tmp].Sz = sz;
                    }
                }
            }
        }
    }

    memcpy(map, tMap, sizeof(node) * MAX * MAX);
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> r >> c >> m;
    rr = 2 * (r - 1), cc = 2 * (c - 1);
    for (int i = 0; i < m; i++) {
        int x, y, s, d, z;
        cin >> x >> y >> s >> d >> z;
        map[x][y].Dir = d;
        if (d == 3 || d == 4) {
            s %= cc;
        } else if (d == 1 || d == 2) {
            s %= rr;
        }
        map[x][y].Vel = s;
        map[x][y].Sz = z;
    }

    for (int i = 1; i <= c; i++) {
        second(i);
    }
    cout << ans << endl;

    return 0;
}
