#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int len; cin >> len;
	int ans = 0;
	int ser = 1;
	for (int i = 0; i < len; i++) {
		int a; cin >> a;
		if (a) {
			ans += ser++;
		}
		else ser = 1;
	}
	cout << ans << '\n';

	return 0;
}
