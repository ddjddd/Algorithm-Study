#include <cstdio>
#include <iostream>
#include <queue>
#include <utility>

using namespace std;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int bfs(int **arr, int n, int m) {

    for (int kk = 0; kk < n; kk++) {
        for (int tt = 0; tt < m; tt++) {
            if (arr[kk][tt] == 2) {
                queue<pair<int, int>> q;
                q.push(make_pair(kk, tt));
                while (!q.empty()) {
                    int tx = q.front().first;
                    int ty = q.front().second;

                    q.pop();
                    for (int i = 0; i < 4; i++) {
                        int xx = tx + dx[i];
                        int yy = ty + dy[i];
                        if (xx >= 0 && xx < n && yy >= 0 && yy < m) {
                            if (arr[xx][yy] == 0) {
                                q.push(make_pair(xx, yy));
                                arr[xx][yy] = 3;
                            }
                        }
                    }
                }
            }
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!arr[i][j])
                count++;
            else if (arr[i][j] == 3)
                arr[i][j] = 0;
        }
    }
    return count;
}

int main() {
    int n, m;
    cin >> n >> m;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[m];
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int mm = 0;
    for (int ax = 0; ax < n; ax++) {
        for (int ay = 0; ay < m; ay++) {
            if (!arr[ax][ay]) {
                arr[ax][ay] = 1;

                for (int bx = ax; bx < n; bx++) {
                    for (int by = 0; by < m; by++) {
                        if (!arr[bx][by]) {
                            arr[bx][by] = 1;

                            for (int cx = bx; cx < n; cx++) {
                                for (int cy = 0; cy < m; cy++) {
                                    if (!arr[cx][cy]) {
                                        arr[cx][cy] = 1;

                                        //										if(ax != cx && ay != cy && bx != cx && by != cy && ax != bx && ay != by) {
                                        if (!(ax == bx && ay == by) && !(bx == cx && by == cy) && !(ax == cx && ay == cy)) {
                                            mm = max(mm, bfs(arr, n, m));
                                            //											cout <<  ax <<' ' << ay << ' ' << bx << ' ' <<  by << ' ' << cx << ' ' << cy <<':'  ;
                                            //											cout << bfs(arr, n, m)  << endl;
                                        }
                                        arr[cx][cy] = 0;
                                    }
                                }
                            }
                            arr[bx][by] = 0;
                        }
                    }
                }
                arr[ax][ay] = 0;
            }
        }
    }
    cout << mm << endl;

    return 0;
}
