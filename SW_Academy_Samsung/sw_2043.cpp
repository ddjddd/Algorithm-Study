#include <iostream>

using namespace std;

int main () {
	int n, p;
	cin >> n >> p;
	int r = n-p + 1;
	if(r < 0) r += 999;
	cout << r;
	return 0;
}
