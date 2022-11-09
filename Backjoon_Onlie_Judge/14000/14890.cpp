#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, l; cin >> n >> l;
    int arr[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        bool visit[100] = {0, };
        for(int c = 0; c < n ; c++) {
            if (c == n-1) {
                ans++;
                break;
            }
            if (arr[i][c] + 1 == arr[i][c+1]) {
                int from = c-(l-1);
                int target = arr[i][c];
                if (from < 0) break;
                bool flag = true;
                for (from; from <= c; from++) {
                    if (arr[i][from] != target) flag = false;
                    if (visit[from]) flag = false;
                }
                if (!flag) break;

            }
            else if (arr[i][c] - 1 == arr[i][c+1]) {
                int to = c + l;
                int target = arr[i][c+1];
                if (to >= n) break;
                bool flag = true;
                for(to; to > c; to--) {
                    if (arr[i][to] != target) flag = false;
                }
                if (!flag) break;
                for(to = c+l; to > c; to--) {
                    visit[to] = true;
                }

            }
            else if (arr[i][c] == arr[i][c+1]) {
            }
            else {
                break;
            }

        }
    }

    for (int i = 0; i < n; i++) {
        bool visit[100] = {0, };

        for(int c = 0; c < n ; c++) {
            if (c == n-1) {
                ans++;
                break;
            }

            if (arr[c][i] + 1 == arr[c+1][i]) {
                int from = c-(l-1);
                int target = arr[c][i];
                if (from < 0) break;
                bool flag = true;
                for (from; from <= c; from++) {
                    if (arr[from][i] != target) flag = false;
                    if (visit[from]) flag = false;
                }
                if (!flag) break;
            }
            else if (arr[c][i] - 1 == arr[c+1][i]) {
                int to = c + l;
                int target = arr[c+1][i];
                if (to >= n) break;
                bool flag = true;
                for(to; to > c; to--) {
                    if (arr[to][i] != target) flag = false;
                }
                if (!flag) break;
                for(to = c+l; to > c; to--) {
                    visit[to] = true;
                }
            }
            else if (arr[c][i] == arr[c+1][i]) {
            }
            else {
                break;
            }
        }
    }

    cout << ans << endl;

	return 0;
}
