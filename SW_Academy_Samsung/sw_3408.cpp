#include <iostream>

using namespace std;
typedef long long ll;

int main () {
	int tC; cin >> tC;
	for(int tc = 1; tc <= tC; tc++) {
		ll a1, a2, a3;
		ll input; cin >> input;
		a1 = (input + 1) * input / 2;
		a2 = (2 * input) * input /2;
		a3 = (2 * input + 2) * input / 2;
		printf("#%d %lld %lld %lld\n", tc, a1, a2, a3);
	}
	return 0;
}
