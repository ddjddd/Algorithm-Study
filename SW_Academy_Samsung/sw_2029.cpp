#include <iostream>

using namespace std;

int main () {
	int c;
	cin >> c;
	for(int i = 0; i < c; i++) {
		int a, b;
		cin >> a >> b;
		cout << "#" << i+1 << " " << a/b << " " << a%b << endl;
	}
	return 0;
}
