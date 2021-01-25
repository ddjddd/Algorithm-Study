#include <iostream>

using namespace std;

int n, m;
int serial[9] = {0, };

void solve(int start, int depth) {
	if (depth == m) {
		for (int i = 0; i < m; i++) {
			cout << serial[i] << ' ';
		}
		cout << '\n';
		return;
	}
    
	for (int i = start; i <= n; i++) {
        serial[depth] = i;
        solve(i, depth + 1);
        serial[depth] = 0;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;
	solve(1, 0);

	return 0;
}