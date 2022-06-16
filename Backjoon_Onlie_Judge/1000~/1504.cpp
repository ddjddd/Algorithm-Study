#include <iostream>
#include <vector>

using namespace std;
struct node { int v, w; };
using vvn = vector<vector<node>>;
using vi = vector<int>;
const int INF = 2000000001;
typedef long long ll;

bool isFinish(int node, vi visit) {
    for (int i = 1; i <= node; i++) if (!visit[i]) return false;
    return true;
}

int nextStep(int node, vi visit, vi length) {
    int ret = 0, minimum = INF;
    for (int i = 1; i <= node; i++) {
        if (!visit[i] && minimum >= length[i]) {
            ret = i;
            minimum = length[i];
        }
    }
    return ret;
}


void dijkstra(int node, int start, vvn graph, vi& length) {
    vi visit(node+1, 0);
    length[start] = 0;

    while(!isFinish(node, visit)) {
        int cur = nextStep(node, visit, length);
        for (auto& it: graph[cur]) {
            length[it.v] = min(length[it.v], length[cur] + it.w);
        }
        visit[cur] = 1;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int node, edge; cin >> node >> edge;
    vvn graph(node+1);
    vi length(node+1, INF);
    vi length2(node+1, INF);
    vi length3(node+1, INF);

    for (int i = 0; i < edge; i++) {
        int u, v, w; cin >> u >> v >> w;
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }
    int mid1, mid2; cin >> mid1 >> mid2;

    dijkstra(node, 1, graph, length);
    dijkstra(node, mid1, graph, length2);
    dijkstra(node, node, graph, length3);


    ll ans = min((ll)length[mid1] + (ll)length3[mid2], (ll)length[mid2] + (ll)length3[mid1]);
    ans += (ll)length2[mid2];
    if (ans >= INF) ans = -1;
    cout << ans << endl;

    return 0;
}