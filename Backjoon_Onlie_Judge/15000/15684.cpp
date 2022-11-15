#include <iostream>
#include <stack>

using namespace std;

int n, m, h;
bool map[31][10];
int ret = -1;

bool check_col(int cur_col) {
    int pos = cur_col;
    for (int i = 1; i <= h; i++) {
        if (map[i][pos - 1])
            pos--;
        else if (map[i][pos])
            pos++;
    }
    if (pos != cur_col)
        return false;
    return true;
}

bool check() {
    for (int i = 1; i <= n; i++) {
        if (!check_col(i))
            return false;
    }
    return true;
}

void dfs(int depth, int max_depth, int row) {
    if (depth == max_depth) {
        if (check()) {
            ret = depth;
        }
        return;
    }
    for (int i = row; i <= h; i++) { //row
        for (int j = 1; j < n; j++) {
            if (!map[i][j - 1] && !map[i][j] && !map[i][j + 1]) {
                map[i][j] = true;
                dfs(depth + 1, max_depth, i);
                map[i][j] = false;
            }
        }
    }
}

int main() {
    cin >> n >> m >> h;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        map[a][b] = true;
    }
    for (int i = 0; i <= 3; i++) {
        dfs(0, i, 1);
        if (ret >= 0)
            break;
    }
    cout << ret;

    return 0;
}
