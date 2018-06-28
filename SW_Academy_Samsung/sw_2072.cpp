#include <iostream>

using namespace std;

int main () {
	int c;
	cin >> c;
	for(int i = 0; i < c; i++) {
		int sum = 0;
		for(int j = 0; j < 10; j++) {
			int test = 0;
			cin >> test;
			if(test % 2) sum += test;
		}
		cout << "#" << i+1 << " " << sum << endl;
	}
	
	return 0;
}
