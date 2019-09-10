#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int xa, xb, xc, ya, yb, yc, ans;
	cin >> xa >> ya >> xb >> yb >> xc >> yc;
	int tmp = xa * yb + xb * yc + xc * ya - ya * xb - yb * xc - yc * xa;
	if (tmp > 0) ans = 1;
	else if (tmp == 0) ans = 0;
	else ans = -1;
	cout << ans << '\n';

	return 0;
}
