#include <iostream>

using namespace std;

int main () {
	int c;
	cin >> c;
	
	int t = 1;
	for(int i = 0; i <= c; i++) {
		cout << t << " ";
		t *= 2;
	}
	
	return 0;
}
