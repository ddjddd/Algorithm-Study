#include <iostream>
#include <stack>

using namespace std;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

typedef struct Node {
    int x, y;
} node;

node new_node(int x, int y) {
    node t;
    t.x = x;
    t.y = y;
    return t;
}

void dfs(int **arr, int i, int j, int a, int b) {
    stack<node> s;

    s.push(new_node(i, j));
    while (!s.empty()) {
        node t = s.top();
        s.pop();
        for (int i = 0; i < 4; i++) {
            int tx = t.x + dx[i];
            int ty = t.y + dy[i];
            if (tx >= 0 && tx < a && ty >= 0 && ty < b) {
                if (arr[tx][ty]) {
                    arr[tx][ty] = 0;
                    s.push(new_node(tx, ty));
                }
            }
        }
    }
}

int main() {
    int tC;
    cin >> tC;
    for (int tc = 1; tc <= tC; tc++) {
        int m, n, num;
        cin >> m >> n >> num;
        int **arr = new int *[n];
        for (int i = 0; i < n; i++) {
            arr[i] = new int[m];
            for (int j = 0; j < m; j++) {
                arr[i][j] = 0;
            }
        }

        for (int i = 0; i < num; i++) {
            int x, y;
            cin >> x >> y;
            arr[y][x] = 1;
        }

        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (arr[i][j] == 1) {
                    arr[i][j] = 0;
                    dfs(arr, i, j, n, m);
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
