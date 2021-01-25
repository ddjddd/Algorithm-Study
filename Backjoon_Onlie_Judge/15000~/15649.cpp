#include <iostream>

using namespace std;

int n, m;
int serial[9] = {0, };
bool visit[9] = {0, };

void solve(int start, int depth) {
	if (depth == m) {
		for (int i = 0; i < m; i++) {
			cout << serial[i] << ' ';
		}
		cout << '\n';
		return;
	}
    
	for (int i = 1; i <= n; i++) {
        if(!visit[i]) {
            visit[i] = true;
            serial[depth] = i;
		    solve(i + 1, depth + 1);
		    serial[depth] = 0;
            visit[i] = false;
        }
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;
	solve(1, 0);

	return 0;
}