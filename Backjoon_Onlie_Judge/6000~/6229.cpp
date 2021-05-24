#include <iostream>
#include <queue>
#include <vector>

using namespace std;
typedef pair<int, int> pii;

int m, n, a, b;
int tab[31][31] = { 0, };
int visit[31][31] = { 0, };

pii start;

int bfs() {
    queue <pii> q;
    q.push(start);
    visit[start.first][start.second] = 1;

    int dx[8] = { a, a, -a, -a, b, b, -b, -b };
    int dy[8] = { b, -b, b, -b, a, -a, a, -a };

    while (!q.empty()) {
        pii cur = q.front();
        int curdist = visit[cur.first][cur.second] + 1;
        q.pop();

        for (int i = 0; i < 8; i++) {
            pii next = { cur.first + dx[i], cur.second + dy[i] };
            if (next.first >= 0 && next.first < m && next.second >= 0 && next.second < n) {
                if (tab[next.first][next.second] == 1) {
                    if (!visit[next.first][next.second]) {
                        q.push(next);
                        visit[next.first][next.second] = !visit[next.first][next.second] ? curdist : min(visit[next.first][next.second], curdist);
                    }
                }
                if (tab[next.first][next.second] == 4) {
                    return curdist;
                }
            }
        }
    }

    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> m >> n >> a >> b;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> tab[i][j];
            if (tab[i][j] == 3) start = { i, j };
        }
    }

    cout << bfs() - 1 << endl;

    return 0;
}