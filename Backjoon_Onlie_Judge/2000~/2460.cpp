#include <iostream>

using namespace std;

int ans = 0;
int n, m, cur = 0;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	for (int i = 0; i < 10; i++) {
		cin >> n >> m;
		cur += m - n;
		if (ans < cur) ans = cur;
	}

	cout << ans << '\n';
	return 0;
}
