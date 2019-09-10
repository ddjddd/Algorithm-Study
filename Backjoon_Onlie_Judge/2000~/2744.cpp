#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	char buf[101]; cin >> buf;
	char t = 'A' - 'a';

	for (int i = 0; buf[i] != '\0'; i++) {
		char c = buf[i];
		if (c >= 'a' && c <= 'z') cout << (char)(c + t);
		else cout << (char)(c - t);
	}
	cout << '\n';
	return 0;
}
