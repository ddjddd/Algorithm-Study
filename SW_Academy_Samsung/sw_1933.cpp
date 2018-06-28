#include <iostream>

using namespace std;

int main () {
	int c;
	cin >> c;
	for(int i = 1; i <= c; i++) {
		if(!(c%i)) cout << i << " ";
	}
	return 0;
}
