#include <iostream>

using namespace std;

int main () {
	int input;
	cin >> input;
	input %= 10;
	
	int cnt = 0;
	for(int i = 0; i < 5; i++) {
		int t; cin >> t;
		if(t == input) cnt++;
	}
	cout << cnt << endl;
	
	return 0;
}
