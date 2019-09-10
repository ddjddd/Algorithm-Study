#include <iostream>

using namespace std;

int n, m, ans = 0, dx[4] = { 1, -1, 0, 0 }, dy[4] = { 0, 0, -1, 1 };
char map[21][21];
bool visit[26];

void btr(int x, int y) {
	bool flag = false;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i], ny = y + dy[i];
		if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
			if (!visit[map[nx][ny] - 'A']) {
				visit[map[nx][ny] - 'A'] = true;
				flag = true;
				btr(nx, ny);
				visit[map[nx][ny] - 'A'] = false;
			}
		}
	}
	if (!flag) {
		int tmp = 0;
		for (int i = 0; i < 26; i++) {
			if (visit[i]) tmp++;
		}
		if (tmp > ans) ans = tmp;
		return;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> map[i];
	}
	visit[map[0][0]-'A'] = true;
	btr(0, 0);

	cout << ans << '\n';
	return 0;
}
