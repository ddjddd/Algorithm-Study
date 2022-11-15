#include <cstdio>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int v, e, start;
int *arr;

vector<vector<pair<int, int>>> edge;
priority_queue<pair<int, int>> q;

int main() {
    scanf("%d %d %d", &v, &e, &start);
    edge.resize(v + 1);
    arr = new int[v + 1];
    for (int i = 0; i < e; i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        edge[a].push_back(make_pair(b, c));
    }

    for (int i = 1; i < v + 1; i++) {
        arr[i] = -1;
    }
    q.push(make_pair(0, start)); // 순서 중요 : pq의 값 비교

    vector<pair<int, int>>::iterator iter;

    while (!q.empty()) {
        int cur = q.top().second;
        int cost = -q.top().first;
        q.pop();
        if (arr[cur] == -1) {
            arr[cur] = cost;
            for (iter = edge[cur].begin(); iter != edge[cur].end(); iter++) {
                int next = (*iter).first;
                int n_cost = -(*iter).second - cost;
                if (arr[next] == -1) {
                    q.push(make_pair(n_cost, next));
                }
            }
        }
    }

    for (int i = 1; i < v + 1; i++) {
        if (arr[i] == -1)
            printf("INF\n");
        else
            printf("%d\n", arr[i]);
    }

    return 0;
}
