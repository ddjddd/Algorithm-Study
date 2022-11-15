#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int tree[3000] = {
    0,
};
bool root[3000];
int n;

struct node {
    int x, y, d;
};

node make_node(int x, int y, int d) {
    node ret;
    ret.x = x;
    ret.y = y;
    ret.d = d;
    return ret;
}

int find(int k) {
    if (tree[k] == k)
        return k;
    tree[k] = find(tree[k]);
    return tree[k];
}

void merge(int a, int b) {
    int x = find(a), y = find(b);
    if (x != y) {
        tree[y] = x;
    }
}

double distance(int x1, int y1, int x2, int y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main() {
    int tC;
    cin >> tC;
    for (int tc = 1; tc <= tC; tc++) {
        cin >> n;
        vector<node> v;

        for (int i = 0; i < n; i++) {
            int x, y, d;
            tree[i] = i;
            root[i] = false;
            scanf("%d %d %d", &x, &y, &d);
            v.push_back(make_node(x, y, d));
        }
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                double tmp = distance(v[i].x, v[i].y, v[j].x, v[j].y);
                if (tmp <= v[i].d + v[j].d) {
                    merge(i, j);
                }
            }
        }

        for (int i = 0; i < n; i++) {
            root[find(i)] = true;
        }
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (root[i])
                cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}
