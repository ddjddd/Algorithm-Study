#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, ans = 0;
    cin >> n >> m;
    vector<string> v(n);
    vector<vector<bool>> visit(n, vector<bool>(m, false));
    for (int i = 0; i < n; i++) cin >> v[i];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!visit[i][j]) {
                if (v[i][j] == '-') {
                    for (int k = j + 1; k < m && v[i][k] == '-'; k++) {
                        visit[i][k] = true;
                    }
                    ans++;
                }
                else if (v[i][j] == '|') {
                    for (int k = i + 1; k < n && v[k][j] == '|'; k++) {
                        visit[k][j] = true;
                    }
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}