#include <iostream>

using namespace std;
typedef long long ll;

int main() {
	int tC; cin >> tC;
	for(int tc = 1; tc <= tC; tc++) {
		int a, b;
		cin >> a >> b;
		long long ret = 1, tmp = 1;
		a = a > (b-a) ? a: (b-a);
		for(int i = b; i > a; i--) {
			ret *= (ll)i;
			int j = b-i+1;
			if(j <= (b-a)) tmp *= (ll)j;
			
			if(ret % tmp == 0) {
				ret /= tmp;
				tmp = 1;
			}
		}
		cout << ret << endl;
	}
	return 0;
}
