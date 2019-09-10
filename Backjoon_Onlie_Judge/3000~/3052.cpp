#include <iostream>

using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt", "r", stdin);
	bool arr[42] = { 0, };
	for (int i = 1; i <= 10; i++) {
		int t; cin >> t;
		arr[t % 42] = true;
	}
	int ans = 0;
	for (int i = 0; i < 42; i++) {
		if (arr[i]) ans++;
	}
	cout << ans << '\n';
}
