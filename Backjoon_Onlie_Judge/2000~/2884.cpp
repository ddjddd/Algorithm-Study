#include <iostream>

using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt", "r", stdin);
	int h, m;
	cin >> h >> m;

	bool flag = false;
	int rm = m - 45;
	if (rm < 0) {
		flag = true;
		rm += 60;
	}
	int rh = h;
	if (flag) rh--;
	if (rh < 0) {
		rh += 24;
	}
	cout << rh << ' ' << rm << '\n';
}
