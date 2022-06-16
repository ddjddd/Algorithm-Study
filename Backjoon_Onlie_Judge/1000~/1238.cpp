#include <iostream>
#include <vector>

using namespace std;
struct node { int v, w; };
using vi = vector<int>;
using vvn = vector<vector<node>>;

const int INF = 987654321;


bool isFininsh(int nodeCount, vi visit) {
    for (int i = 1; i <= nodeCount; i++) if (visit[i] == -1) return false;
    return true;
}

int nextStep(int nodeCount, vi visit, vi length) {
    int ret = 0, minimum = INF;
    for (int i = 1; i <= nodeCount; i++) {
        if (visit[i] == -1 && minimum >= length[i]) {
                ret = i;
                minimum = length[i];
        }
    }
    return ret;
}

void dijkstra(int nodeCount, int start, vvn tree, vi& length) {
    vector<int> visit(nodeCount+1, -1);
    length[start] = 0;
    while(!isFininsh(nodeCount, visit)) {
        int cur = nextStep(nodeCount, visit, length);
        for(auto& it: tree[cur]) {
            if (length[it.v] > length[cur] + it.w) {
                length[it.v] = length[cur] + it.w;
            }
        }
        visit[cur] = 1;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int nodeCount, edgeCount, endPoint; cin >> nodeCount >> edgeCount >> endPoint;
    vvn tree(nodeCount+1), tree_rev(nodeCount+1);

    for (int i = 0; i < edgeCount; i++) {
        int from, to, weight; cin >> from >> to >> weight;
        tree[from].push_back({to, weight});
        tree_rev[to].push_back({from, weight});
    }

    vector<int> length(nodeCount+1, INF), length_rev(nodeCount+1, INF);
    dijkstra(nodeCount, endPoint, tree, length);
    dijkstra(nodeCount, endPoint, tree_rev, length_rev);

    int ans = 0;
    for (int i = 1; i <= nodeCount; i++) {
        if (i != endPoint) {
            int longest = length[i] + length_rev[i];
            ans = max(ans, longest);
        }
    }

    cout << ans << endl;

    return 0;
}