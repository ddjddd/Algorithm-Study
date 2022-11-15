#include <iostream>
#include <utility>
#include <vector>

#define MAX 100007

using namespace std;

int n;
vector<int> tree[MAX];
int parent[MAX] = {
    0,
};
bool visit[MAX] = {
    0,
};

void dfs(int cur) {
    // if(visit[cur]) return;
    for (auto v : tree[cur]) {
        if (!visit[v]) {
            parent[v] = cur;
            visit[cur] = true;
            dfs(v);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for (int i = 1; i < n; i++) {
        int parent, child;
        cin >> parent >> child;
        tree[parent].push_back(child);
        tree[child].push_back(parent);
    }

    dfs(1);
    for (int i = 2; i <= n; i++)
        cout << parent[i] << '\n';

    return 0;
}
