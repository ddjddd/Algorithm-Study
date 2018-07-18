#include <iostream>

using namespace std;

typedef long long ll;

ll digitsum(ll in){
	ll sum = 0;
	while(in > 0) {
		sum += in%10;
		in /= 10;
	}
	return sum;
}

int main () {
	int tC; cin >> tC;
	for(int tc = 1; tc <= tC; tc++) {
		ll in; scanf("%lld", &in);
		ll sum = digitsum(in);
		while(sum / 10) {
			sum = digitsum(sum);
		}
		printf("#%d %d\n", tc, sum);
	}
}
