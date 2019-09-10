#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int len; cin >> len;
	int ans = 0;
	for (int i = 0; i < len; i++) {
		int a, b; cin >> a >> b;
		ans += b % a;
	}
	cout << ans << '\n';

	return 0;
}
