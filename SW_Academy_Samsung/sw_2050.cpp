#include <iostream>

using namespace std;

int main () {
	char c;
	while (scanf(" %1c", &c) != EOF) {
		cout << c - 'A' + 1 << " ";
	}
	return 0;
}
