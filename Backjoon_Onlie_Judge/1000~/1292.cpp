#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a, b;
	cin >> a >> b;
	int ret = 0;

	int k = 1;
	for (int i = 1; i <= 1000; i++) {
		for (int j = 0; j < i; j++) {
			if (k < a) {
				k++;
			}
			else if (k >= a && k <= b) {
				k++;
				ret += i;
			}
			else {
				break;
			}
		}
		if (k > b) break;
	}


	cout << ret << '\n';
	return 0;
}
