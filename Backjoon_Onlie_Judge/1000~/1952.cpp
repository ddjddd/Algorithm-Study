#include <iostream>

using namespace std;

int map[100][100];
bool visit[100][100] = { 0, };
int n, m;
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;

	int x = 0, y = 0, dir = 0, cnt = 0;
	while (true) {
		if (!visit[x][y]) visit[x][y] = true;
		else break;
		int nx = x + dx[dir];
		int ny = y + dy[dir];
		//cout << x << ' ' << y << ' ' << cnt << endl;

		if (nx >= 0 && nx < n && ny >= 0 && ny < m && !visit[nx][ny]) {
			x = nx;
			y = ny;
		}
		else {
			dir = (dir + 1) % 4;
			x = x + dx[dir];
			y = y + dy[dir];
			if (!visit[x][y])
				cnt++;
		}
	}
	cout << cnt << '\n';

	return 0;
}
