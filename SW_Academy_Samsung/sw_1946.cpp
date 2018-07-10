#include <iostream>

using namespace std;

int main () {
	int tC; cin>>tC;
	for(int tc = 1; tc <= tC; tc++) {
		int num; cin >> num;
		int count = 0;
		cout << '#' << tc;
		for(int i = 0; i < num; i++) {
			char c; int t;
			cin >> c >> t;
			for(int j = 0; j < t; j++) {
				if (!(count%10)) cout << endl;
				cout << c;
				count++;
			}
		}
        cout << endl;
	}
	return 0;
}
