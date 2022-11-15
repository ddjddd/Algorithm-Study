#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(5));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> v[i][j];
        }
    }

    int tmp = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        vector<bool> visit(n, false);
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < n; k++) {
                if (i != k && v[i][j] == v[k][j])
                    visit[k] = true;
            }
        }

        int t = 0;
        for (int j = 0; j < n; j++)
            if (visit[j])
                t++;
        if (t > tmp) {
            ans = i + 1;
            tmp = t;
        }
    }
    if (ans == 0)
        ans = 1;
    cout << ans << endl;

    return 0;
}
