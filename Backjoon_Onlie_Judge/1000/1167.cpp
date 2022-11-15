#include <iostream>
#include <queue>
#include <vector>

using namespace std;
struct node {
    int v, w;
};
using vvn = vector<vector<node>>;

node bfs(int nodeCount, int start, vvn tree) {
    queue<node> q;
    vector<int> visit(nodeCount + 1), length(nodeCount + 1);
    q.push({ start, 0 });
    visit[start] = 1;

    while (!q.empty()) {
        node cur = q.front();
        q.pop();
        if (cur.w > length[cur.v])
            length[cur.v] = cur.w;
        for (node it : tree[cur.v]) {
            if (!visit[it.v]) {
                visit[it.v] = 1;
                q.push({ it.v, it.w + cur.w });
            }
        }
    }

    int m = length[1], ret = 1;
    for (int i = 2; i <= nodeCount; i++) {
        if (i != start && length[i] > m) {
            m = length[i];
            ret = i;
        }
    }

    return { ret, m };
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int nodeCount = 0;
    cin >> nodeCount;
    vvn tree(nodeCount + 1);
    for (int i = 0; i < nodeCount; i++) {
        int cur, a, b;
        cin >> cur;
        while (true) {
            cin >> a;
            if (a == -1)
                break;
            cin >> b;
            tree[cur].push_back({ a, b });
            tree[a].push_back({ cur, b });
        }
    }

    node startNode = bfs(nodeCount + 1, 1, tree);
    node endNode = bfs(nodeCount + 1, startNode.v, tree);

    cout << endNode.w << '\n';

    return 0;
}
