#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;
typedef pair<int, int> pii;

vector<int> v;
vector<pii> st;

pii sol(pii a, pii b) {
    pii ret;
    ret.first = min(a.first, b.first);
    ret.second = max(a.second, b.second);
    return ret;
}

pii init(int start, int end, int cur) {
    if(start == end) {
        return st[cur] = {v[start], v[start]};
    }
    int mid = (start + end) / 2;
    return st[cur] = sol(init(start, mid, cur*2), init(mid+1, end, cur*2+1));
}

pii solve(int start, int end, int cur, int l, int r) {
    if(l > end || r < start)   return {2000000000, -2000000000};
    if(l <= start && end <= r) return st[cur];
    int mid = (start + end) / 2;
    return sol(solve(start, mid, cur*2, l, r), solve(mid+1, end, cur*2+1, l, r));
    return {-2, -2};
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; cin >> n >> m;

    v.resize(n);
    st.resize(4*n);
    for(int i = 0; i < n; i++) cin >> v[i];

    init(0, v.size()-1, 1);

    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;

        pii ans = solve(0, v.size() -1, 1, a-1, b-1);
        cout << ans.first << ' ' << ans.second << '\n';
    }

    return 0;
}