#include <algorithm>
#include <cstdio>
#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main() {
    int node, edge, start;
    cin >> node >> edge >> start;

    int mtx[node + 1][node + 1] = {
        0,
    };

    for (int i = 0; i < edge; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        mtx[x][y] = mtx[y][x] = 1;
    }

    bool visit[node + 1] = {
        0,
    };
    stack<int> s;
    s.push(start);
    while (s.empty() != true) {
        int cur = s.top();
        s.pop();
        if (visit[cur] == false) {
            visit[cur] = true;
            for (int i = node; i > 0; i--) {
                if (visit[i] == false && mtx[cur][i] == 1) {
                    s.push(i);
                }
            }
            printf("%d ", cur);
        }
    }
    printf("\n");

    fill_n(visit, node + 1, false);
    queue<int> q;
    q.push(start);
    while (q.empty() != true) {
        int cur = q.front();
        q.pop();
        if (visit[cur] == false) {
            visit[cur] = true;
            for (int i = 1; i <= node; i++) {
                if (visit[i] == false && mtx[cur][i] == 1) {
                    q.push(i);
                }
            }
            printf("%d ", cur);
        }
    }
    printf("\n");

    return 0;
}
