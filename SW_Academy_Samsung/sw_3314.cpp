#include <iostream>

using namespace std;

int main () {
	int tC; cin >> tC;
	for(int tc = 1; tc <= tC; tc++) {
		int num = 0;
		int input;
		for(int i = 0; i < 5; i++) {
			cin >> input; 
			if (input < 40) input = 40;
			num += input;
		}
		cout << '#' << tc << ' ' << num/5 << endl;
	}
	return 0;
}
