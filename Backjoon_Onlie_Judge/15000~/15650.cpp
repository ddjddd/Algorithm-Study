#include <iostream>

using namespace std;

int n, m;
bool visit[9];

void solve(int start, int cur) {
	if (cur == m) {
		for (int i = 1; i <= n; i++) {
			if (visit[i]) cout << i << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = start; i <= n; i++) {
		visit[i] = true;
		solve(i + 1, cur + 1);
		visit[i] = false;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;
	solve(1, 0);

	return 0;
}