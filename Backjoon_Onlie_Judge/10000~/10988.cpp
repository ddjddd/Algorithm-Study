#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	char buf[101];
	int len = 0;
	bool ans = true;
	cin >> buf;
	for (int i = 0; buf[i]; i++) len++;
	int tlen = len / 2;
	for (int i = 0; i < tlen; i++) {
		if (buf[i] != buf[len - 1 - i]) {
			ans = false;
			break;
		}
	}
	cout << ans << '\n';

	return 0;
}
