#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

vector <ll> v;
vector <ll> sgt;

ll init(int start, int end, int node) {
    if(start == end) return sgt[node] = v[start];
    int mid = (start + end) / 2;
    return sgt[node] = min(init(start, mid, node*2), init(mid+1, end, node*2+1));
}

ll solve(int start, int end, int node, int left, int right) {
    if(left > end || right < start) return 1000000001;
    if(left <= start && end <= right) return sgt[node];
    int mid = (start + end) / 2;
    return min(solve(start, mid, node*2, left, right), solve(mid+1, end, node*2+1, left, right));
}

int main  () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    v.resize(n);
    sgt.resize(4*n);

    for(int i = 0; i < n; i++) cin >> v[i];
    init(0, n-1, 1);
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        cout << solve(0, n-1, 1, a-1, b-1) << '\n';
    }

    return 0;
}