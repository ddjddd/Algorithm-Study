#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b; cin >> a >> b;
	
	a /= 100; a *= 100;
	int ans = 0;
	for (int i = 0; i < 100; i++) {
		if (!((a + i) % b)) {
			ans = i;
			break;
		}
	}
	cout.fill('0');
	cout.width(2);
	cout << ans << '\n';

	return 0;
}
