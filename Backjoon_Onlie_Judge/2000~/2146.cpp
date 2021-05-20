#include <iostream>
#include <vector>
#include <queue>

using namespace std;
typedef pair<int, int> pii;

int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { 1, -1, 0, 0 };


void bfs(int si, int sj, int color, int n, vector<vector<int>>& map) {
    queue<pii> q;

    q.push({ si, sj });
    map[si][sj] = color;

    while (!q.empty()) {
        pii cur = q.front();
        q.pop();

        for (int dir = 0; dir < 4; dir++) {
            pii next = { cur.first + dx[dir], cur.second + dy[dir] };
            if (next.first >= 0 && next.first < n && next.second >= 0 && next.second < n) {
                if (map[next.first][next.second] == 1) {
                    q.push(next);
                    map[next.first][next.second] = color;
                }
            }
        }
    }
}

int bfs2(pii spos, int n, vector<vector<int>>& map) {
    queue<pair<pii, int>> q;
    vector<vector<int>> visit(n, vector<int>(n, 99999999));

    int color = map[spos.first][spos.second];
    q.push({ spos, 1 });
    visit[spos.first][spos.second] = 1;

    int ret = 9999999;

    while (!q.empty()) {
        pii cur = q.front().first;
        int dist = q.front().second;
        q.pop();

        for (int dir = 0; dir < 4; dir++) {
            pii next = { cur.first + dx[dir], cur.second + dy[dir] };
            if (next.first >= 0 && next.first < n && next.second >= 0 && next.second < n) {
                if (map[next.first][next.second] == color) {
                    if (visit[next.first][next.second] > dist) {
                        q.push({ next,  dist });
                        visit[next.first][next.second] = min(visit[next.first][next.second], dist);
                    }
                }
                else if (!map[next.first][next.second]) {
                    if (visit[next.first][next.second] > dist + 1) {

                        q.push({ next,  dist + 1 });
                        visit[next.first][next.second] = min(visit[next.first][next.second], dist + 1);
                    }
                }
                else {
                    ret = min(ret, dist);
                }
            }
        }
    }
    return ret - 1;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<vector<int>> map(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> map[i][j];
        }
    }

    vector<pii> start;

    int color = 2;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (map[i][j] == 1) {
                bfs(i, j, color, n, map);
                color++;
                start.push_back({ i, j });
            }
        }
    }

    int ans = 999999999;
    for (auto& it : start) {
        ans = min(ans, bfs2(it, n, map));
    }
    cout << ans << endl;

    return 0;
}