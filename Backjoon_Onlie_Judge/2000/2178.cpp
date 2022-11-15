#include <iostream>
#include <queue>

using namespace std;

typedef struct Node {
    int x;
    int y;
    int len;
} node;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    bool visited[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%1d", &arr[i][j]);
            visited[i][j] = false;
        }
    }

    queue<node> q;
    node k;
    k.x = 0;
    k.y = 0;
    k.len = 0;

    int mi = 10000000;
    q.push(k);
    while (!q.empty()) {
        node t = q.front();
        q.pop();
        if (t.x < n - 1 && arr[t.x + 1][t.y] && !visited[t.x + 1][t.y]) {
            node nn;
            nn.x = t.x + 1;
            nn.y = t.y;
            nn.len = t.len + 1;
            q.push(nn);
            visited[nn.x][nn.y] = true;
        }
        if (t.x > 0 && arr[t.x - 1][t.y] && !visited[t.x - 1][t.y]) {
            node nn;
            nn.x = t.x - 1;
            nn.y = t.y;
            nn.len = t.len + 1;
            q.push(nn);
            visited[nn.x][nn.y] = true;
        }
        if (t.y > 0 && arr[t.x][t.y - 1] && !visited[t.x][t.y - 1]) {
            node nn;
            nn.x = t.x;
            nn.y = t.y - 1;
            nn.len = t.len + 1;
            q.push(nn);
            visited[nn.x][nn.y] = true;
        }
        if (t.y < m - 1 && arr[t.x][t.y + 1] && !visited[t.x][t.y + 1]) {
            node nn;
            nn.x = t.x;
            nn.y = t.y + 1;
            nn.len = t.len + 1;
            q.push(nn);
            visited[nn.x][nn.y] = true;
        }
        if (t.x == n - 1 && t.y == m - 1)
            mi = min(mi, t.len);
    }

    cout << ++mi << endl;

    return 0;
}
