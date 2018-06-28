#include <iostream>

using namespace std;

int main () {
	char c;
	while (scanf(" %c", &c) != EOF) {
		if (c >= 'a' && c <= 'z') c -= 32;
		cout << c;
	}
	return 0;
}
