#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector <int> v(n);

    for (int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());
    int m; cin >> m;
    for (int i = 0; i < m; i++) {
        int tmp; cin >> tmp;
        pair<vector<int>::iterator, vector<int>::iterator> range = equal_range(v.begin(), v.end(), tmp);
        cout << range.second - range.first << ' ';
    }
    cout << '\n';

    return 0;
}