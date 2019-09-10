#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long a, b, ans;
	cin >> a >> b;
	ans = (b - a) > 0 ? (b - a) : (a - b);
	cout << ans << '\n';
	return 0;
}
