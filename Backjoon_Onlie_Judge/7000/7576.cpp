#include <iostream>
#include <queue>
#define MAX(a, b) ((a) > (b) ? (a) : (b))

using namespace std;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {
    int n, m;
    cin >> m >> n;
    int **arr = new int *[n];
    queue<pair<int, int>> q;

    for (int i = 0; i < n; i++) {
        arr[i] = new int[m];
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
                q.push(make_pair(i, j));
        }
    }

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        int t = arr[x][y];
        q.pop();
        for (int i = 0; i < 4; i++) {
            int tx = x + dx[i];
            int ty = y + dy[i];
            if (tx >= 0 && tx < n && ty >= 0 && ty < m) {
                if (arr[tx][ty] == 0) {
                    q.push(make_pair(tx, ty));
                    arr[tx][ty] = t + 1;
                }
            }
        }
    }

    int count = -1, ret = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 0) {
                cout << "-1\n";
                return 0;
            } else
                ret = MAX(ret, arr[i][j]);
        }
    }
    cout << ret - 1 << endl;
    return 0;
}
