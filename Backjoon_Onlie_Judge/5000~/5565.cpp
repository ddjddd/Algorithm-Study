#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b;
	cin >> a;
	for (int i = 1; i < 10; i++) {
		cin >> b;
		a -= b;
	}
	cout << a << '\n';

	return 0;
}
