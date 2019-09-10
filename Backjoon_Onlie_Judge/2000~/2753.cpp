#include <iostream>

using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt", "r", stdin);
	int a; cin >> a;
	bool ans = false;
	if (!(a%4)) {
		ans = true;
		if (!(a % 100)) ans = false;
		if (!(a % 400)) ans = true;
	}	
	cout << ans << '\n';
	return 0;
}
