#include <iostream>

using namespace std;

int main () {
	int c;
	cin >> c;
	for(int t = 0; t < c; t++) {
		int k;
		cin >> k;
		int y = k / 10000, m = k%10000/100, d = k%100;
		if (m <= 0 || m > 12 || d < 0) cout << "#" << t+1 << " " << -1 << endl;
		else {
			if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && d > 31)
				cout << "#" << t+1 << " " << -1 << endl;
			else if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30)
				cout << "#" << t+1 << " " << -1 << endl;
			else if (m == 2 && d > 28)
				cout << "#" << t+1 << " " << -1 << endl;
			else printf("#%d %04d/%02d/%02d\n", t+1, y, m, d);
		}
	}
	return 0;
}
