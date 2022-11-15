#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

using namespace std;
typedef long long ll;

int n, m, k;
vector<ll> v;
vector<ll> st;

ll init(int start, int end, int node) {
    if (start == end)
        return st[node] = v[start];
    int mid = (start + end) / 2;
    return st[node] = init(start, mid, node * 2) + init(mid + 1, end, node * 2 + 1);
}

ll sum(int start, int end, int node, int l, int r) {
    if (r < start || l > end)
        return 0;
    if (l <= start && end <= r)
        return st[node];
    int mid = (start + end) / 2;
    return sum(start, mid, node * 2, l, r) + sum(mid + 1, end, node * 2 + 1, l, r);
}

void update(int start, int end, int node, int idx, ll diff) {
    if (idx < start || idx > end)
        return;
    st[node] += diff;
    if (start == end)
        return;
    int mid = (start + end) / 2;
    update(start, mid, node * 2, idx, diff);
    update(mid + 1, end, node * 2 + 1, idx, diff);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m >> k;
    v.resize(n);
    st.resize(4 * n);

    int start = 0, end = v.size() - 1;

    for (int i = 0; i < n; i++)
        cin >> v[i];
    init(start, end, 1);

    for (int i = 0; i < m + k; i++) {
        int a, b;
        ll d;
        cin >> a >> b >> d;

        if (a == 1) {
            update(start, end, 1, b - 1, d - v[b - 1]);
            v[b - 1] = d;
        } else {
            cout << sum(start, end, 1, b - 1, d - 1) << '\n';
        }
    }

    return 0;
}