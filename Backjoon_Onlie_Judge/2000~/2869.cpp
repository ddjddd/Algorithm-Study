#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, v; cin >> a >> b >> v;
	int ans = 0, cur = 0;

	ans = (v - a) / (a - b);
	cur = (v - a) % (a - b);
	if (cur) ans++;

	cout << ans + 1 << '\n';

	return 0;
}
