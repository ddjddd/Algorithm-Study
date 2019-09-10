#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt", "r", stdin);

	long long a, b, c;

	cin >> a >> b >> c;
	long long ans = 0;
	if (b >= c) ans = 0;
	else ans = a / (c - b) + 1;
	if (ans == 0) ans = -1;
	cout << ans << '\n';
	return 0;
}
