#include <algorithm>
#include <cstdio>
#include <iostream>
#include <stack>
#include <vector>

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

int dfs(int **arr, int i, int j, int num) {
    stack<node> s;
    int count = 0;

    s.push(new_node(i, j));
    while (!s.empty()) {
        node t = s.top();
        s.pop();
        count++;
        for (int i = 0; i < 4; i++) {
            int tx = t.x + dx[i];
            int ty = t.y + dy[i];

            if (tx >= 0 && tx < num && ty >= 0 && ty < num) {
                if (arr[tx][ty]) {
                    s.push(new_node(tx, ty));
                    arr[tx][ty] = 0;
                }
            }
        }
    }
    return count;
}

int main() {
    int num;
    cin >> num;
    int **arr = new int *[num];
    for (int i = 0; i < num; i++) {
        arr[i] = new int[num];
        for (int j = 0; j < num; j++) {
            scanf("%1d", &arr[i][j]);
        }
    }
    vector<int> v;
    int count = 0;
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            if (arr[i][j]) {
                arr[i][j] = 0;
                int a = dfs(arr, i, j, num);
                v.push_back(a);
                count++;
            }
        }
    }
    cout << count << endl;
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    return 0;
}
